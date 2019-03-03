#include "TravisPracticeArduinoLib.h"

TravisPracticeArduinoLib::TravisPracticeArduinoLib() {
}

void TravisPracticeArduinoLib::printHello(HardwareSerial serial) {
  serial.print("hello");
}

#ifdef USBCON
void TravisPracticeArduinoLib::printHello(Serial_ serial) {
  serial.print("hello");
}
#endif
