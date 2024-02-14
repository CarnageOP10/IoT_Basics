//HC SR04 sensor ultrasonic sensor works at 40 kHz freq, can sense from 2cm to 400cm, measuring angle is 15 degrees because both sensors are inclined, speed of sound is 340m/s. 
int echoPin = 10;
int triggerPin = 9;

long timetofly;
long distance;

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);

}

void loop() {
  //clears the trigger pin 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);

  // sets trigger pin on high for 10 micros
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  // reads echopin and return travel time in micro sec
  timetofly = pulseIn(echoPin, HIGH);

  distance = timetofly*0.034/2;
  

  // output on serial monitor

  Serial.println("Distance: ");
  Serial.println(distance);
  Serial.println("cm");
  delay(500);
}
