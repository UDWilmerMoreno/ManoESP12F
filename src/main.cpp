#include <Arduino.h>
#define LedR 12
#define LedG 14
#define LedB 16
int retardo = 2000;

void setup()
{
  pinMode(LedR, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(LedB, OUTPUT);
  digitalWrite(LedR, HIGH);
  digitalWrite(LedG, HIGH);
  digitalWrite(LedB, HIGH);
}

void LedRojo()
{
  digitalWrite(LedR, LOW);
  digitalWrite(LedG, HIGH);
  digitalWrite(LedB, HIGH);
}

void LedVerde()
{
  digitalWrite(LedR, HIGH);
  digitalWrite(LedG, LOW);
  digitalWrite(LedB, HIGH);
}

void LedAzul()
{
  digitalWrite(LedR, HIGH);
  digitalWrite(LedG, HIGH);
  digitalWrite(LedB, LOW);
}

void loop()
{
  LedRojo();
  delay(retardo);
  LedVerde();
  delay(retardo);
  LedAzul();
  delay(retardo);
}