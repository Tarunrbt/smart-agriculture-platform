// soil_moisture_test.ino
// Basic soil moisture sensor read test — Arduino Uno

const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
  Serial.println("Soil Moisture Sensor Test Starting...");
}

void loop() {
  int rawValue = analogRead(sensorPin);
  Serial.print("Raw value: ");
  Serial.print(rawValue);

  if (rawValue > 800) {
    Serial.println("  -> Status: DRY");
  } else if (rawValue > 400) {
    Serial.println("  -> Status: MOIST");
  } else {
    Serial.println("  -> Status: WET");
  }

  delay(1000);
}
