#include <LiquidCrystal.h>
#include <HCSR04.h>

int tpin = 2;
int epin = 3;

long dista;

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);


void setup() {
    lcd.begin(16, 5);
     HCSR04.begin(tpin, epin);
    lcd.setCursor(1, 0);
    lcd.print("Distance");
}

void loop() {
  lcd.setCursor(5, 1);
  double* distances = HCSR04.measureDistanceCm();
  lcd.print(distances[0]);
  lcd.print("cm");
  delay(500);
}
