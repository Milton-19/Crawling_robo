#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // Attach servos to Arduino pins
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

  // Neutral position
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);

  delay(1000);
}

void loop() {

  // Step 1 - left/right movement
  servo1.write(45);
  servo2.write(135);
  servo3.write(45);
  servo4.write(135);
  delay(500);

  // Step 2 - opposite movement
  servo1.write(135);
  servo2.write(45);
  servo3.write(135);
  servo4.write(45);
  delay(500);
}