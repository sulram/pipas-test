#include <Arduino.h>
#include "pipas.h"

void setup() {
  Serial.begin(9600);
  pinMode(STATUS_L, OUTPUT);
  pinMode(STATUS_R, OUTPUT);
}

void loop() {
  Serial.println(1);
  digitalWrite(STATUS_L, HIGH);
  digitalWrite(STATUS_R, LOW);
  delay(1000);
  Serial.println(2);
  digitalWrite(STATUS_L, LOW);
  digitalWrite(STATUS_R, HIGH);
  delay(1000);
}