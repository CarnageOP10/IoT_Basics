#include <DHT.h>
#define DHTPIN 7
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

float temp;
float hum;
void setup(){
  Serial.begin(9600);
  dht.begin();
}
void loop(){
  temp=dht.readTemperature();
  hum=dht.readHumidity();
Serial.print("Temp is: ");
Serial.print(temp);
Serial.println("deg celcius");
Serial.print("hum is: ");
Serial.println(hum);
delay(1000);
}