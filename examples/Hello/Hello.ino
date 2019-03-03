#include <TravisPracticeArduinoLib.h>

TravisPracticeArduinoLib practice;

void setup() {
#if defined(TRAVIS_PRACTICE_SAMD_BOARD)
  SerialUSB.begin(115200);
#else
  Serial.begin(115200);
#endif
}

void loop() {
#if defined(TRAVIS_PRACTICE_SAMD_BOARD)
  practice.printHello(&SerialUSB);
#else
  practice.printHello(&Serial);
#endif
  Serial.println(" at " + String(millis()));
  delay(1000);
}
