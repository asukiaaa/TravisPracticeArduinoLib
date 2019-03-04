#ifndef __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#define __TRAVIS_PRACTICE_ARDUINO_LIB_H__

#if defined(UART)
#include <Uart.h>
#else
#include <HardwareSerial.h>
#endif

#if defined(USBCON)
#if defined(__arm__)
#include <USB/USBAPI.h>
#else
#include <USBAPI.h>
#endif
#endif

class TravisPracticeArduinoLib {
 public:
  TravisPracticeArduinoLib();
#if defined(UART)
  void printHello(Uart *serial);
#else
  void printHello(HardwareSerial *serial);
#endif

#ifdef USBCON
  void printHello(Serial_ *serial);
#endif
};

#endif
