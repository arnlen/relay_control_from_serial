## Arduino: Control relay switch

**Goal**: Switch a relay based on data received on the serial port.

## How to use it?

- Connect the relay to the PIN #7 of your Arduino
- Connect your Arduino with serial to your computer
- Send `0` or `1` on the serial port to switch the relay from one position to the other (`on`/`off`).

## Why this?

I need to control motors connected to my Arduino, from my Raspberry.
The relay is a first step into that direction.