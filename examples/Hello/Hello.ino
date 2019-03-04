#include <TravisPracticeArduinoLib.h>

TravisPracticeArduinoLib practice;

void setup() {
#if defined(__arm__) && !defined(__adafruit__)
  SerialUSB.begin(115200);
#else
  Serial.begin(115200);
#endif
}

void loop() {
#if defined(__arm__) && !defined(__adafruit__)
  practice.printHello(&SerialUSB);
#else
  practice.printHello(&Serial);
#endif
  Serial.println(" at " + String(millis()));
  delay(1000);
}
