int a=7;
int b=6;
int c=5;
int d=4;
int e=3;
int f=2;
int g=1;
int button=11;
int count=0;





void setup() {
  // put your setup code here, to run once:
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
}
                                                             
void loop() {
  // put your main code here, to run repeatedly:
int buttonstate= digitalRead(button);
if(buttonstate==0){
  count++;
}
if(count==10){
  count=0;
}

switch(count){
  case 1: PORTD=B10011110;
  break;
  case 2: PORTD=B00100100;
  break;
  case 3: PORTD=B00001100;
  break;
  case 4: PORTD=B10011000;
  break;
  case 5: PORTD=B01001000;
  break;
  case 6: PORTD=B01000000;
  break;
  case 7: PORTD=B00011110;
  break;
  case 8: PORTD=B00000000;
  break;
  case 9: PORTD=B00001000;
  break;
  case 0: PORTD = B00000010; //displlaying 0
  break;

}
delay(150);
}
