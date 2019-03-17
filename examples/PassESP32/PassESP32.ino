#include <HardwareSerial.h>

void hardHello(HardwareSerial *serial) {
  serial->println("hello");
}

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial2.begin(115200);
}

void loop() {
  hardHello(&Serial);
  hardHello(&Serial1);
  hardHello(&Serial2);
}

