/*
 *
 * Arnlen
 * Controle the LCD screen
 * Allow display of serial data
 *
 */

#include <Arduino.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup_lcd() {
  lcd.begin(16, 2);
}

void display_serial_data(String message) {
  lcd.clear();
  lcd.write(message);
}
