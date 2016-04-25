/*
 *
 * Arnlen
 * A set of programs to control device conntected to an Arduino
 * through serial
 *
 */

#include "relay_controller.h"
#include "lcd_controller.h"

void setup() {
  setup_relay();
  setup_lcd();

  Serial.begin(9600);      // Must match the Rails SERIAL_BAUD_RATE config
  while (!Serial) { delay(5); }      // Wait for serial communication to be ready
}

void loop() {
  display_serial_data();
  activate_the_relay();

  delay(1000); // wait for 1 second before every loop
}
