#include<LiquidCrystal.h>
#include<DHT.h>

#define DHTTYPE DHT11

int ldrpin = A0;
int ldrval = 0;
char* light[]= {"Day", "Night"};

int dhtpin = 8;
float temp;


DHT dht(dhtpin, DHTTYPE);    // defining the connection of the dht 11 sensor

int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {

lcd.begin(16, 2);
dht.begin();   //dht initialize

}

void loop() {
  
ldrval = analogRead(ldrpin);

temp = dht.readTemperature();         


lcd.clear();


if(ldrval > 200){
lcd.setCursor(0,0);          //set line 1 point 0
lcd.print("Temp = ");
lcd.print(temp);
lcd.print("\337C");         //to print degree celcius   

lcd.setCursor(0,1);
lcd.print(light[0]);        //printing day
;
}
else{
lcd.setCursor(0,0);          //set line 1 point 0
lcd.print("");
}
delay(2000);

}