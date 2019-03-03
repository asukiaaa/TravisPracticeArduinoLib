#include <TravisPracticeArduinoLib.h>

TravisPracticeArduinoLib practice;

void setup() {
  Serial.begin(115200);
}

void loop() {
  practice.printHello(Serial);
  Serial.println(" at " + String(millis()));
  delay(1000);
}
