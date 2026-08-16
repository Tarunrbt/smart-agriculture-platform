/*
 * Smart Agriculture
 * Class 7 Science Project
 *
 * Step 2: Button controls LED
 */

const int BUTTON_PIN = 4;
const int LED_PIN = 2;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    // Button pressed (LOW because of INPUT_PULLUP)
    digitalWrite(LED_PIN, HIGH);
  } else {
    // Button not pressed
    digitalWrite(LED_PIN, LOW);
  }
}
