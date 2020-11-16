#include <Arduino.h>

#define BLUE 3
#define GREEN 5
#define RED 6

#define btn_red 9
#define btn_blue 10
#define btn_green 11
#define btn_off 8
#define btn_randam 2

#define delayTime 10

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  pinMode(btn_red, INPUT_PULLUP);
  pinMode(btn_blue, INPUT_PULLUP);
  pinMode(btn_green, INPUT_PULLUP);
  pinMode(btn_off, INPUT_PULLUP);
  pinMode(btn_randam, INPUT_PULLUP);

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

void loop()
{
  if(digitalRead(btn_red) == LOW)
  {
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
  }
  else
  {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
  }

  if(digitalRead(btn_blue) == LOW)
  {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, HIGH);
  }
  else
  {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
  }

  if(digitalRead(btn_green) == LOW)
  {
    digitalWrite(RED, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, HIGH);
  }
  else
  {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
  }
}
