#include "Keyboard.h"

void setup() {
  pinMode(53, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (!digitalRead(53)) {
    delay(200);
    Keyboard.write(134);
  }
}

//