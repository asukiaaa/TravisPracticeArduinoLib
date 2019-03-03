#include "TravisPracticeArduinoLib.h"

TravisPracticeArduinoLib::TravisPracticeArduinoLib() {
}

void TravisPracticeArduinoLib::printHello(HardwareSerial serial) {
  serial.print("hello");
}
