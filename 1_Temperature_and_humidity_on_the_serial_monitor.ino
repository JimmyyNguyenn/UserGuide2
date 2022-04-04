#include <DHT.h>          //Include the DHT11 sensor library
#define DHTPIN 7          //Attribute a pin for the sensor
#define DHTTYPE DHT11     //Since there are two different sensors, the DHT22 and DHT11, we define the one we need to have the proper settings.
DHT dht(DHTPIN, DHTTYPE); // Attribute a name for DHT and attribute his pin and type.

float Temp = 0; // Set a float for temperature
float Hum = 0;  // Set a float for humidity

void setup() {
  Serial.begin(9600); //Set a serial communication
}

void loop() {
  Temp = dht. readTemperature();  //Store the dht temperature into Temp
  Hum =  dht. readHumidity();     //Store the dht humidity into Hum
  Serial.print("Temperature = "); //Print the "Temperature ="
  Serial.print(Temp);             //Print the temperature value
  Serial.print("\t");             //Print a gap
  Serial.print("Humidity = ");    //Print the "Humidity = "
  Serial.println(Hum);            //Print the humidity value
  delay(1000);                    //Delay of 1 second
}
