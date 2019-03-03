#ifndef __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#define __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#include <HardwareSerial.h>

#if defined(ARDUINO_SAMD_ZERO) || defined(ARDUINO_SAMD_MKR1000) || defined(ARDUINO_SAMD_MKRZERO) || defined(ARDUINO_SAMD_MKRFox1200) || defined(ARDUINO_SAMD_MKRGSM1400) || defined(ARDUINO_SAMD_MKRWAN1300) || defined(ARDUINO_SAMD_MKRWIFI1010) || defined(ARDUINO_SAMD_MKRNB1500) || defined(ARDUINO_SAM_ZERO)
#define TRAVIS_PRACTICE_SAMD_BOARD
#endif

#if defined(USBCON)
#if defined(TRAVIS_PRACTICE_SAMD_BOARD)
#include <USB/USBAPI.h>
#else
#include <USBAPI.h>
#endif
#endif

#if defined(TRAVIS_PRACTICE_SAMD_BOARD)
#include <Uart.h>
#endif

class TravisPracticeArduinoLib {
 public:
  TravisPracticeArduinoLib();
#if defined(TRAVIS_PRACTICE_SAMD_BOARD)
  void printHello(Uart *serial);
#else
  void printHello(HardwareSerial *serial);
#endif

#ifdef USBCON
  void printHello(Serial_ *serial);
#endif
};

#endif
