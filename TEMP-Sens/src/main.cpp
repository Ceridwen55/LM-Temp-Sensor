#include <Arduino.h>

// put function declarations here:

int readPin = A2;
float scaleFactor = 0.01;
float temp;
float readValue;
float calcValue;

void setup()
{
  pinMode(readPin,INPUT);  
  Serial.begin(9600);
}

void loop() 
{ 
  readValue = analogRead(readPin);
  calcValue = readValue * (5.0/1023.0);
  temp = calcValue / scaleFactor;
  Serial.println(temp);
  delay(3000);
}
