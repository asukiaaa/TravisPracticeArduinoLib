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
#else
  practice.printHello(&Serial);
#endif
  Serial.println(" at " + String(millis()));
  delay(1000);
}
