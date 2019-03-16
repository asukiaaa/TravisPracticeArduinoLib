#include <HardwareSerial.h>
#include <SoftwareSerial.h>

SoftwareSerial softSerial(8, 9);

void mainHello(HardwareSerial &serial) {
  serial->println("hello");
}

void softHello(SoftwareSerial &serial) {
  serial->println("hello");
}

void setup() {
  Serial.begin(115200);
  softSerial.begin(115200);
}

void loop() {
  mainHello(&Serial);
  softHello(&softSerial);
}
