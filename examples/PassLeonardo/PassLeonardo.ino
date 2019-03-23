#include <HardwareSerial.h>
#include <SoftwareSerial.h>
#include <USBAPI.h>

SoftwareSerial softSerial(8, 9);

void usbHello(Serial_ *serial) {
  serial->println("hello");
}

void hardHello(HardwareSerial *serial) {
  serial->println("hello");
}

void softHello(SoftwareSerial *serial) {
  serial->println("hello");
}

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
  softSerial.begin(115200);
}

void loop() {
  usbHello(&Serial);
  hardHello(&Serial1);
  softHello(&softSerial);
  delay(1000);
}
