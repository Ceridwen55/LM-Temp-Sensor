#include <Arduino.h>

// put function declarations here:

int readPin = A2;
float scaleFactor = 0.01;
float temp;
float readVoltageSensorValue;
float calcVoltValue;
float tempF;

void setup()
{
  pinMode(readPin,INPUT);  
  Serial.begin(9600);
}

void loop() 
{ 
  readVoltageSensorValue = analogRead(readPin);
  calcVoltValue = readVoltageSensorValue * (5.0/1023.0);
  temp = calcVoltValue / scaleFactor;
  tempF = (temp * 9/5) + 32 ;
  Serial.print("C : ");
  Serial.println(temp);
  delay(500);
  Serial.print("F : ");
  Serial.println(tempF);
  delay(500);
}
