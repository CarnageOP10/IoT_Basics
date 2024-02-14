int LDRpin=A0;
int LDRvalue=0;

void setup() {
Serial.begin(9600);
pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {

LDRvalue = analogRead(LDRpin);

if(LDRvalue<100)
digitalWrite(LED_BUILTIN, HIGH);
else
digitalWrite(LED_BUILTIN, LOW);
Serial.println(LDRvalue);
delay(200);
}
