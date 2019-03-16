#include <HardwareSerial.h>

void mainHello(HardwareSerial *serial) {
  serial->println("hello");
}

void subHello(HardwareSerial *serial) {
  serial->println("hello");
}

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial2.begin(115200);
}

void loop() {
  mainHello(&Serial);
  subHello(&Serial1);
  subHello(&Serial2);
}

