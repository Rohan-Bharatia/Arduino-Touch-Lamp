#include <Arduino.h>
#include <CapacitiveSensor>

CapacitiveSensor CapSens = CapacitiveSensor(3, 2);
const int threshold = 1000;
const int ledPin = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  long sensVal = capSens.capacitiveSensor(30);

  Serial.println(sensVal);

  if(sensVal > threshold)
  {
    digitalWrite(ledPin, HIGH);
  } else
  {
    digitalWrite(ledPin, LOW);
  }
  
  delay(1000);
}
