/*
 *
 * Arnlen
 * Controle the relay through serial inputs
 *
 */

#include <Arduino.h>

int relay = 7;       // relay on pin 7
boolean relayState = 0;    // relay state (on / off)

void setupRelay() {
  pinMode(relay, OUTPUT);
}

void activateTheRelay(String message) {
  if (message == "1" || message == "0") {
    relayState = message;
    digitalWrite(relay, relayState); // Write to relay
  }
}
