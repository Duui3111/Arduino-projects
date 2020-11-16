#include <Arduino.h>

#define BLUE 3
#define GREEN 5
#define RED 6

#define delayTime 10

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

void loop()
{
  for (int i = 0; i < 255; i++)
  { 
    analogWrite(RED, 255);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
    delay(delayTime);
  }

  for (int i = 0; i < 255; i++)
  {
    analogWrite(RED, 0);
    analogWrite(GREEN, 255);
    analogWrite(BLUE, 0);
    delay(delayTime);
  }

  for (int i = 0; i < 255; i++)
  {
    analogWrite(RED, 0);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 255);
    delay(delayTime);
  }
}
