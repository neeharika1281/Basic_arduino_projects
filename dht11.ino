#include <dht11.h>
#define DHT11PIN A0

dht11 DHT11;
//int curr1,curr2;
String datalabel11 = "Humidity";
String datalabel12 = "Temperature";
bool label = true;
String s;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  /*while(label)
  {
    Serial.print(datalabel11);
    Serial.print(",");
    Serial.println(datalabel12);
    label = false;
  }*/
  int chk = DHT11.read(DHT11PIN);
  int data1 = (float)DHT11.humidity;
  int data2 = (float)DHT11.temperature;
  /*if(data1!=curr1 && data2!=curr2)
  {*/
    Serial.print("Humidity (%): ");
    Serial.print(data1);
    Serial.print(",");
    Serial.print("Temperature (C): ");
    Serial.println(data2);
    /*curr1 = data1;
    curr2 = data2;
  }*/
  delay(1000);
} 
