#include <HardwareSerial.h>
#include <Uart.h>
#include <USB/USBAPI.h>

void usbHello(Serial_ *serial) {
  serial->println("hello");
}

void hardHello(HardwareSerial *serial) {
  serial->println("hello");
}

void uartHello(Uart *serial) {
  serial->println("hello");
}

// https://learn.adafruit.com/using-atsamd21-sercom-to-add-more-spi-i2c-serial-ports/creating-a-new-serial
Uart Serial2(&sercom1, 11, 10, SERCOM_RX_PAD_0, UART_TX_PAD_2);

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial2.begin(115200);
}

void loop() {
  usbHello(&Serial);
  hardHello(&Serial1);
  uartHello(&Serial2);
}
