#include <HardwareSerial.h>
#include <SoftwareSerial.h>

SoftwareSerial softSerial(10, 11);

void hardHello(HardwareSerial *serial) {
  serial->println("hello");
}

void softHello(SoftwareSerial *serial) {
  serial->println("hello");
}

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial2.begin(115200);
  Serial3.begin(115200);
  softSerial.begin(115200);
}

void loop() {
  hardHello(&Serial);
  hardHello(&Serial1);
  hardHello(&Serial2);
  hardHello(&Serial3);
  softHello(&softSerial);
  delay(1000);
}
