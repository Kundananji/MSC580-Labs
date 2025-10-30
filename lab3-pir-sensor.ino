int Buzz = 8; // Buzzer pin
int LED = 13; // LED pin
int PIR = 3; // PIR pin
int val = 0;

void setup() {
  pinMode(Buzz, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(PIR);
  if (val == HIGH) {
    digitalWrite(LED, HIGH);
    digitalWrite(Buzz, HIGH);
    Serial.println("Movement Detected");
  } else {
    digitalWrite(LED, LOW);
    digitalWrite(Buzz, LOW);
    Serial.println("Movement not Detected");
  }
}