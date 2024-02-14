int LDRpin=A0;
int LDRvalue=0;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
LDRvalue = analogRead(LDRpin);
  Serial.println(LDRvalue);
  delay(200);
}
/*max resistance is black resistance(need to specify)(we 10k ohm dark resistance ldr)*/