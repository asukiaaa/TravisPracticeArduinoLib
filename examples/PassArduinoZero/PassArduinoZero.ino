#include <HardwareSerial.h>
#include <USB/USBAPI.h>

void usbHello(Serial_ *serial) {
  serial->println("hello");
}

void hardHello(HardwareSerial *serial) {
  serial->println("hello");
}

void setup() {
  SerialUSB.begin(115200); // native port
  Serial.begin(115200); // programming port
  Serial1.begin(115200); // 0: RX, 1: TX
}

void loop() {
  usbHello(&SerialUSB);
  hardHello(&Serial);
  hardHello(&Serial1);
}
