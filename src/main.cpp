#include <Arduino.h>

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  static u_int32_t tmr;
  static int dir = 1;
  static int duty = 0;
  if (millis() - tmr >= 20)
  {
    tmr = millis();
  }
}

/* #include <Arduino.h>
#include <Wire.h>
#include "PCF8575.h"

PCF8575 device_0(0x20);
PCF8575 device_1(0x21);

void setup()
{

  Wire.begin();
  Serial.begin(115200);
}

void loop()
{

  byte error, address;
  int nDevices;
  Serial.println("Scanning...");
  nDevices = 0;
  for (address = 1; address < 127; address++)
  {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if (error == 0)
    {
      Serial.print("I2C device found at address 0x");
      if (address < 16)
      {
        Serial.print("0");
      }
      Serial.println(address, HEX);
      nDevices++;
    }
    else if (error == 4)
    {
      Serial.print("Unknow error at address 0x");
      if (address < 16)
      {
        Serial.print("0");
      }
      Serial.println(address, HEX);
    }
  }
  if (nDevices == 0)
  {
    Serial.println("No I2C devices found\n");
  }
  else
  {
    Serial.println("done\n");
  }
  delay(5000);
} */

/* //! EXAMPLE millis
#include <Arduino.h>
#include <Wire.h>

const int Led1 = 13;
const int Led2 = 11;
const int Led3 = 10;
const int Led4 = 9;
const int BTN = 8;

bool led1State = 1;
bool led2State = 1;
bool led3State = 1;

unsigned long prev_ms1 = 0;
unsigned long prev_ms2 = 0;
unsigned long prev_ms3 = 0;

const int On1 = 1000;                  // Светит
const int Off1 = 500;                  // Не светит
const int On2 = 2000;                  // Светит
const int Off2 = 500;                  // Не светит
const int On3 = 3000;                  // Светит
const int Off3 = 500;                  // Не светит

bool BTN_state = 1;

void setup() {

 pinMode(Led1, OUTPUT);
 pinMode(Led2, OUTPUT);
 pinMode(Led3, OUTPUT);
 pinMode(Led4, OUTPUT);
 pinMode(BTN, INPUT_PULLUP);
}

void loop() {
 unsigned long currentTime = millis(); // текущее время в миллисекундах
 BTN_state = digitalRead(BTN);

 if((led1State == 1) && (currentTime - prev_ms1 >= On1))
 {
    led1State = 0;                      // выключаем
    prev_ms1 = currentTime;             // запоминаем время
    digitalWrite(Led1, led1State);      // Гасим светодиод
 }
  else if ((led1State == 0) && (currentTime - prev_ms1 >= Off1))
  {
    led1State = 1;                      // включаем
    prev_ms1 = currentTime;             // запоминаем время
    digitalWrite(Led1, led1State);      // Зажигаем светодиод
  }

 if((led2State == 1) && (currentTime - prev_ms2 >= On2))
 {
    led2State = 0;                      // выключаем
    prev_ms2 = currentTime;             // запоминаем время
    digitalWrite(Led2, led2State);      // Гасим светодиод
 }
  else if ((led2State == 0) && (currentTime - prev_ms2 >= Off2))
  {
    led2State = 1;                       // включаем
    prev_ms2 = currentTime;              // запоминаем время
    digitalWrite(Led2, led2State);       // Зажигаем светодиод
  }
 if((led3State == 1) && (currentTime - prev_ms3 >= On3))
 {
    led3State = 0;                      // выключаем
    prev_ms3 = currentTime;             // запоминаем время
    digitalWrite(Led3, led3State);      // Гасим светодиод
 }
  else if ((led3State == 0) && (currentTime - prev_ms3 >= Off3))
  {
    led3State = 1;                       // включаем
    prev_ms3 = currentTime;              // запоминаем время
    digitalWrite(Led3, led3State);       // Зажигаем светодиод
  }

 if (BTN_state == HIGH) {
    digitalWrite(Led4, LOW);
  } else {
    digitalWrite(Led4, HIGH);
    }
} */