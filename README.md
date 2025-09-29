# Arduino-ultrasonic-senor-servo-motor
This project uses an Arduino UNO, an ultrasonic sensor, and a servo motor to demonstrate automated control based on distance measurement. The servo motor moves according to the readings from the ultrasonic sensor, which can be used as a foundation for applications like automatic parking systems or obstacle detection in robotics

***_COMPONENTS REQUIRED_*** :
- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Jumper Wires
- Breadboard

***CIRCUIT CONNECTION***:

HC-SR04   ->  Arduino
VCC      ->   5V
GND      ->   GND
Trig     ->   Pin 9
Echo     ->   Pin 10
Servo    ->   Pin 6

***_LOGIC BEHIND_***:
Arduino sends trig to ultrasonic senor
Sensor calculate the distance and based on which the servo motor will move

***_APPLICATION_***:
Automatic car parking system
Robotics applications
Real time distance measurement

***_FUTURE DEVELOPMENT_*** :
Integrate with raspberry pi
Display of the distance measured ,and also of closing and opening of gate

***_CREDITS_***:
 The code has been generate with the help of AI tools and implemented , modified, tested by me.
 
***_LICENSE_*** :
 MIT License
