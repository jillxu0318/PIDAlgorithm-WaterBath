#include <OneWire.h>

#include <DallasTemperature.h>

//DQ connected to D2 on the Arduino
#define ONE_WIRE_BUS 2

OneWire oneWire (ONE_WIRE_BUS);

DallasTemperature sensors (&oneWire);

int timerCounter=0;
boolean relay = true;

void setup(void)
{
  sensors.begin();
  pinMode(13, OUTPUT); 
}

void loop(void)
{
  sensors.requestTemperatures();
  delay(1000);
  timerCounter++;

  Serial.print("The temperature is: ");
  Serial.println(sensors.getTempCByIndex(0));

  if( timerCounter % 5 == 0)
  {
    if( relay)
    {
      digitalWrite(13, HIGH); // Turn the Powertail on
      Serial.println("Switch ON");
      relay = false;
    }
    else
    {
      digitalWrite(13, LOW); // Turn the Powertail on
      Serial.println("Switch OFF");
      relay = true;
    }
  }
}

