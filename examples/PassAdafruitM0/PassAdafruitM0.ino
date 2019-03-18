#include <HardwareSerial.h>
#include <USB/USBAPI.h>

void usbHello(Serial_ *serial) {
  serial->println("hello");
}

void hardHello(HardwareSerial *serial) {
  serial->println("hello");
}

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
}

void loop() {
  usbHello(&Serial);
  hardHello(&Serial1);
}
