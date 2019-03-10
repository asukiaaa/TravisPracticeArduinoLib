#ifndef __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#define __TRAVIS_PRACTICE_ARDUINO_LIB_H__

#if defined(ARDUINO_SAM_DUE)
#include <UARTClass.h>
#elif defined(UART)
#include <Uart.h>
#endif

#include <HardwareSerial.h>

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
#if defined(ARDUINO_SAM_DUE)
  void printHello(UARTClass *serial);
#elif defined(UART)
  void printHello(Uart *serial);
#endif
  void printHello(HardwareSerial *serial);

#ifdef USBCON
  void printHello(Serial_ *serial);
#endif
};

#endif
