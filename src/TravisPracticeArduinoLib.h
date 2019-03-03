#ifndef __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#define __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#include <HardwareSerial.h>

class TravisPracticeArduinoLib {
 public:
  TravisPracticeArduinoLib();
  void printHello(HardwareSerial serial);
};

#endif
