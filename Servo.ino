#include <Servo.h>
Servo myServo;

int Sdelay = 1000;
int Smax = 180;
int Smin = 0;

void setup() {
 myServo.attach(9);
}

void loop() {
  myServo.write(Smax);
  delay(Sdelay);

  myServo.write(Smin);
  delay(Sdelay);
}
