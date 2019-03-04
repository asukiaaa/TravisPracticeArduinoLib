#include "TravisPracticeArduinoLib.h"

TravisPracticeArduinoLib::TravisPracticeArduinoLib() {
}

#if defined(TRAVIS_PRACTICE_UART_USED)
void TravisPracticeArduinoLib::printHello(Uart *serial) {
  serial->print("hello");
}
#else
void TravisPracticeArduinoLib::printHello(HardwareSerial *serial) {
  serial->print("hello");
}
#endif

#ifdef USBCON
void TravisPracticeArduinoLib::printHello(Serial_ *serial) {
  serial->print("hello");
}
#endif
