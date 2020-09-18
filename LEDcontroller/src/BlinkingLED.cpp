#include <Arduino.h>

void setup() 
{
  //Initialize LED digital pin as an Output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
  //Using Delay between Writing LED High and LOW
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}  