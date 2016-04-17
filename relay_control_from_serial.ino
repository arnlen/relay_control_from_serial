/*
  Arnlen
  Control a relay state from serial commands.
 */

const int RELAY = 7;       // relay on pin 7  
boolean relayState = 0;    // relay state (on / off)

void setup() {  
  pinMode(RELAY, OUTPUT);

  Serial.begin(9600);      // Must match the Rails SERIAL_BAUD_RATE config
  while (!Serial) { }      // Wait for serial communication to be ready
}

void loop() {  
  int message = Serial.read()-'0'; // Remove "0" which is the -48 value

  Serial.println(message);         // Output on serial for debug purpose

  if (message != -49) {

    if (message == 1 || message == 0) {
      relayState = message;
      digitalWrite(RELAY, relayState); // Write to relay
    }
  }

  delay(1000); // wait for 1 second before every loop
}
