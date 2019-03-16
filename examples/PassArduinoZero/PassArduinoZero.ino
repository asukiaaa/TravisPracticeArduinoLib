#include <USB/USBAPI.h>

void mainHello(Serial_ *serial) {
  serial->println("hello");
}

void subHello(HardwareSerial *serial) {
  serial->println("hello");
}

void setup() {
  SerialUSB.begin(115200); // native port
  Serial.begin(115200); // programming port
  Serial1.begin(115200); // 0: RX, 1: TX
}

void loop() {
  mainHello(&SerialUSB);
  subHello(&Serial);
  subHello(&Serial1);
}
