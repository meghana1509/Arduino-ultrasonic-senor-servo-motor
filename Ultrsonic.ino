#include <Servo.h>        // include servo library

// Pin definitions
const int trigPin = 9;     // Ultrasonic sensor TRIG
const int echoPin = 10;    // Ultrasonic sensor ECHO
const int servoPin = 6;    // Servo signal pin

Servo gateServo;           // Servo object

long duration;
int distance;

void setup() {
  // Set up ultrasonic pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Attach servo to pin
  gateServo.attach(servoPin);
  gateServo.write(0);  // Gate initially closed

  Serial.begin(9600);  // For debugging
}

void loop() {
  // --- Ultrasonic distance measurement ---
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // distance in cm

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // --- Gate control logic ---
  if (distance < 10) {         // Car detected within 15 cm
    gateServo.write(90);       // Open gate (adjust angle as needed)
    delay(2000);               // Wait 3 seconds for car to pass
    gateServo.write(0);        // Close gate
  } else {
    gateServo.write(0);        // Keep gate closed
  }

  delay(200); // Small delay between readings
}
