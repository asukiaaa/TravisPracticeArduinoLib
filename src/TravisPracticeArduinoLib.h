#ifndef __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#define __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#include <HardwareSerial.h>

#if defined(__AVR__)
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
