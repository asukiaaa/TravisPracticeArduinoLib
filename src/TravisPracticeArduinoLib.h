#ifndef __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#define __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#include <HardwareSerial.h>

#if defined(ARDUINO_AVR_LEONARDO) | defined(ARDUINO_AVR_MICRO)
#include <USBAPI.h>
#endif

class TravisPracticeArduinoLib {
 public:
  TravisPracticeArduinoLib();
  void printHello(HardwareSerial serial);
#ifdef USBCON
  void printHello(Serial_ serial);
#endif
};

#endif
