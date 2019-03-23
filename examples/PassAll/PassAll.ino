#include <HardwareSerial.h>

#if !defined(__arm__) && !defined(ESP32)
#include <SoftwareSerial.h>

void softHello(SoftwareSerial *serial) {
  serial->println("hello");
}

#ifdef ARDUINO_MEGA
SoftwareSerial softSerial(10, 11);
#else
SoftwareSerial softSerial(8, 9);
#endif
#endif

// define hardHello before including SoftwareSerial cause error
void hardHello(HardwareSerial *serial) {
  serial->println("hello");
}

#ifdef ARDUINO_SAM_DUE
#include <UARTClass.h>

void uartClassHello(UARTClass *serial) {
  serial->println("hello");
}
#elif defined(__arm__)
#include <Uart.h>

void uartHello(Uart *serial) {
  serial->println("hello");
}

#if ADAFRUIT_METRO_M4_EXPRESS
  Uart uartSerial(&sercom1, 11, 10, SERCOM_RX_PAD_0, UART_TX_PAD_2);
#endif
#endif

#ifdef USBCON
#ifdef __arm__
#include <USB/USBAPI.h>
#else
#include <USBAPI.h>
#endif

void usbHello(Serial_ *serial) {
  serial->println("hello");
}
#endif

void setup() {
  Serial.begin(115200);

#if !defined(__arm__) && !defined(ESP32)
  softSerial.begin(115200);
#endif

#if defined(ARDUINO_MEGA) || defined(ARDUINO_DUE) || defined(ESP32)
  Serial1.begin(115200);
  Serial2.begin(115200);
#ifndef ESP32
  Serial3.begin(115200);
#endif
#endif

#if ADAFRUIT_METRO_M4_EXPRESS
  uartSerial.begin(115200);
#endif
}

// define flag to detect using SerialUSB
#if defined(__arm__) && !defined(ADAFRUIT_FEATHER_M0) && !defined(ADAFRUIT_METRO_M4_EXPRESS)
// adafruit boards don't use SerialUSB
#define USING_SERIAL_USB
#endif

void loop() {
#ifdef USING_SERIAL_USB
  usbHello(&SerialUSB);
#endif

#ifdef ARDUINO_SAM_DUE
  uartClassHello(&Serial);
#elif defined(USBCON) && !defined(USING_SERIAL_USB)
  usbHello(&Serial);
#else
  hardHello(&Serial);
#endif

#if !defined(__arm__) && !defined(ESP32)
  softHello(&softSerial);
#endif

#if defined(ARDUINO_MEGA) || defined(ARDUINO_DUE) || defined(ESP32)
  hardHello(&Serial1);
  hardHello(&Serial2);
#ifndef ESP32
  hardHello(&Serial3);
#endif
#endif

#if ADAFRUIT_METRO_M4_EXPRESS
  uartHello(&uartSerial);
#endif
}
