#include <HardwareSerial.h>
#include <UARTClass.h>
#include <USB/USBAPI.h>

void usbHello(Serial_ *serial) {
  serial->println("hello");
}

void uartClassHello(UARTClass *serial) {
  serial->println("hello");
}

void hardHello(HardwareSerial *serial) {
  serial->println("hello");
}

void setup() {
  SerialUSB.begin(115200);
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial2.begin(115200);
  Serial3.begin(115200);
}

void loop() {
  usbHello(&SerialUSB);
  uartClassHello(&Serial);
  hardHello(&Serial1);
  hardHello(&Serial2);
  hardHello(&Serial3);
}
