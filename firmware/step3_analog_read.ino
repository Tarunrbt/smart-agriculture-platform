/*
 * Smart Agriculture
 * Class 7 Science Project
 *
 * Step 3: Read an analog sensor value
 */

const int SENSOR_PIN = 34;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);

  Serial.print("Sensor value: ");
  Serial.println(sensorValue);

  delay(500);
}
