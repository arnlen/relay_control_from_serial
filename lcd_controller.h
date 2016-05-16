/*
 *
 * Arnlen
 * Controle the LCD screen
 * Allow display of serial data
 *
 */

#include <Arduino.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setupLcd() {
  lcd.begin(16, 2);
}

void displaySerialData(String message) {
  lcd.clear();
  lcd.print(message);
}
