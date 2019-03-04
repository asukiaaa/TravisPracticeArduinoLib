#ifndef __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#define __TRAVIS_PRACTICE_ARDUINO_LIB_H__
#include <HardwareSerial.h>

#if defined(ARDUINO_SAMD_FEATHER_M0_EXPRESS) || defined(ARDUINO_SAMD_CIRCUITPLAYGROUND_EXPRESS) || defined(ARDUINO_GEMMA_M0) || defined(ARDUINO_TRINKET_M0) || defined(ARDUINO_ITSYBITSY_M0) || defined(ARDUINO_PIRKEY) || defined(ARDUINO_METRO_M4) || defined(ARDUINO_GRAND_CENTRAL_M4) || defined(ARDUINO_ITSYBITSY_M4) || defined(ARDUINO_FEATHER_M4) || defined(ARDUINO_SAMD_HALLOWING) || defined(ARDUINO_PYPORTAL_M4) || defined(ARDUINO_CRICKIT_M0) || defined(ARDUINO_TRELLIS_M4)
#define TRAVIS_PRACTICE_ADAVRUIT_SAMD
#endif

#if defined(__arm__)
#define TRAVIS_PRACTICE_ARM_BOARD
#endif

#if defined(USBCON)
#if defined(TRAVIS_PRACTICE_ARM_BOARD)
#include <USB/USBAPI.h>
#else
#include <USBAPI.h>
#endif
#endif

#if defined(TRAVIS_PRACTICE_ARM_BOARD) && !defined(ARDUINO_SAM_DUE)
#define TRAVIS_PRACTICE_UART_USED
#endif

#if defined(TRAVIS_PRACTICE_UART_USED)
#include <Uart.h>
#endif

class TravisPracticeArduinoLib {
 public:
  TravisPracticeArduinoLib();
#if defined(TRAVIS_PRACTICE_UART_USED)
  void printHello(Uart *serial);
#else
  void printHello(HardwareSerial *serial);
#endif

#ifdef USBCON
  void printHello(Serial_ *serial);
#endif
};

#endif
