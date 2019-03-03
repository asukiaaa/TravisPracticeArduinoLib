#include <TravisPracticeArduinoLib.h>

TravisPracticeArduinoLib practice;

#if defined(__AVR__) || defined(ESP8266) || defined(ESP32)
#define USE_SERIAL_BOARDS
#endif

void setup() {
#if defined(USE_SERIAL_BOARDS)
  Serial.begin(115200);
#else
  SerialUSB.begin(115200);
#endif
}

void loop() {
#if defined(USE_SERIAL_BOARDS)
  practice.printHello(Serial);
#else
  practice.printHello(SerialUSB);
#endif
  Serial.println(" at " + String(millis()));
  delay(1000);
}
