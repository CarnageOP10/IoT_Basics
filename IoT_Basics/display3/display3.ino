int a=7;
int b=6;
int c=5;
int d=4;
int e=3;
int f=2;
int g=1;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH); 
  delay(1000); //displaying

  PORTD = B00100100; //displaying 2
  delay(1000);

  PORTD = B0001100; //displlaying 3p
  delay(1000);
}
