#include <Servo.h>

#include <Servo.h>

#include <Servo.h>

#include <Servo.h>

// Create 4 servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // Attach servos to PWM pins
  servo1.attach(10);
  servo2.attach(11);
  servo3.attach(6);
  servo4.attach(9);

  // Set initial home positions (90 degrees)
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(1000);
}

void loop() {
  // Sweep all 4 servos from 0 to 180 degrees
  for (int pos = 0; pos <= 180; pos += 1) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    delay(15);
  }

  delay(500);

  // Sweep back from 180 to 0 degrees
  for (int pos = 180; pos >= 0; pos -= 1) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    delay(15);
  }

  delay(500);
}