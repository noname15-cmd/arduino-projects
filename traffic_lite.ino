// Traffic Light - Arduino Uno
// Red -> pin 11, Yellow -> pin 10, Green -> pin 9

const int RED = 11;
const int YELLOW = 10;
const int GREEN = 9;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  // Red
  digitalWrite(RED, HIGH);
  delay(5000);

  // Red + Yellow (get ready)
  digitalWrite(YELLOW, HIGH);
  delay(1000);

  // Green
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(5000);

  // Green blinking
  for (int i = 0; i < 3; i++) {
    digitalWrite(GREEN, LOW);
    delay(300);
    digitalWrite(GREEN, HIGH);
    delay(300);
  }

  // Yellow
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  digitalWrite(YELLOW, LOW);
}
