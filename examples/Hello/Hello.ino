#include <TravisPracticeArduinoLib.h>

TravisPracticeArduinoLib practice;

void setup() {
#if defined(SerialUSB)
  SerialUSB.begin(115200);
#else
  Serial.begin(115200);
#endif
}

void loop() {
#if defined(SerialUSB)
  practice.printHello(&SerialUSB);
  SerialUSB.println(" at " + String(millis()));
#else
  practice.printHello(&Serial);
  Serial.println(" at " + String(millis()));
#endif
  delay(1000);
}
