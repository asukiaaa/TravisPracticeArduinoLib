#include "TravisPracticeArduinoLib.h"

TravisPracticeArduinoLib::TravisPracticeArduinoLib() {
}

#if defined(ARDUINO_SAM_DUE)
void TravisPracticeArduinoLib::printHello(UARTClass *serial) {
  serial->print("hello");
}
#elif defined(UART)
void TravisPracticeArduinoLib::printHello(Uart *serial) {
  serial->print("hello");
}
#endif
void TravisPracticeArduinoLib::printHello(HardwareSerial *serial) {
  serial->print("hello");
}

#ifdef USBCON
void TravisPracticeArduinoLib::printHello(Serial_ *serial) {
  serial->print("hello");
}
#endif
