//lab 7.
//16x2 lcd.   
/* V0 is contrast control.
RS and RW defines if we are selecting or putting up a command or data(sent in ascii format).   
E(enable) turns on or off the lcd
8 pins for data(can be used a data of 8 bits at once).
BLA and BLK backlit anode and backlit cathode
terminals of  which are together are fixed terminal and the 3rd one is variable.
*/
/*
#include<LiquidCrystal.h>

int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
lcd.begin(16,2);                 //set up number of rows and columns in lcd
lcd.print("Hello World");        //print a message on lcd

}

void loop() {
  lcd.setCursor(0, 1);          //set the cursor to column 0 and line 1  
  lcd.print(millis()/1000);     //print the number of seconds since reset

}
*/

/*no.2
#include<LiquidCrystal.h>

int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
lcd.begin(16,2);                 //set up number of rows and columns in lcd
lcd.print("Hello World");        //print a message on lcd

}

void loop() {
  lcd.noBlink();            //turn off the blinking cursor
  delay(500);      
  lcd.blink();              //turn on the blinking cursor 
  delay(500);
}
*/


/*
*no.3
#include<LiquidCrystal.h>

int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
lcd.begin(16,2);                 //set up number of rows and columns in lcd
lcd.print("Hello World");        //print a message on lcd

}

void loop() {
  lcd.noCursor();            //turn off the blinking cursor
  delay(500);      
  lcd.Cursor();              //turn on the blinking cursor 
  delay(500);
}                                
*/


#include<LiquidCrystal.h>

int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
lcd.begin(16,2);                 //set up number of rows and columns in lcd
Serial.begin(9600);

}

void loop() {
  //if the character arrives on serial part
  if(Serial.available()){
    delay(100);
    lcd.clear();

    while(Serial.available()>0){
      lcd.write(Serial.read());
    }
  }
}