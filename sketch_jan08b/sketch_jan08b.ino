int LED = 13; // Use the onboard Uno LED
int isObstaclePin = 2; // This is our input pin
int isObstacle = HIGH; // HIGH MEANS NO OBSTACLE
int count = 0;
bool first = true;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  isObstacle = digitalRead(isObstaclePin);
  if (isObstacle == LOW) 
  {
    if (first == true) {
      first = false;
      Serial.println(count);
      count += 1;
      digitalWrite(LED, HIGH);
    }
  } 
  else 
  {
    first = true;
    // Serial.println("clear");
    digitalWrite(LED, LOW);
  }
  delay(20);
}
