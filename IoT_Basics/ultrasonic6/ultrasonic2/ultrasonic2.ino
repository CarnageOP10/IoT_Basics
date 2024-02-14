#include <NewPing.h>
int TriggerPin = 9;
int echoPin = 10;

// defining max dist
#define MAX_DISTANCE 400

// newping setup of pins and max dist
NewPing sonar(TriggerPin, echoPin, MAX_DISTANCE);


void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print("Distance: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
  delay(500);

}
