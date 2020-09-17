#include <Arduino.h>

//Define variables for pins
#define LED1 2
#define LED2 3
#define Button1 4
#define Button2 5

//Define variable name for Storing Read Values
int ButtonState1 = 0;
int ButtonState2 = 0;

void setup() 
{
  //Initialize LED digital pin as an Output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  //Initialize Button digital pin as an Output
  pinMode(Button1, OUTPUT);
  pinMode(Button2, OUTPUT);
}

void loop() 
{
  //Read Button State for both Buttons
  ButtonState1 = digitalRead(Button1);
  ButtonState2 = digitalRead(Button2);

  //Setting Digital Outs to High if ButtonState is High
  digitalWrite(LED1, ButtonState1);
  digitalWrite(LED2, ButtonState2);  
}