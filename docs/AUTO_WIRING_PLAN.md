# Auto-Wiring Plan — Wokwi Diagram Generator

## Goal
Build a tool/script in the repository that takes a sensor name from the
user and automatically generates the `connections` section of
`diagram.json` — without manual drag-and-drop wiring.

## Current State (v0 — Manual)
- Connections for each sensor are being written manually (e.g. DHT22).
- The assistant/developer looks up the pinout and provides a JSON snippet
  every time.
- No reusable database or script exists yet.

## Source-of-Truth Policy
> A component only becomes canonical/verified in `components.json` once
> its exact Wokwi part type and pinout have been confirmed against the
> official docs (docs.wokwi.com) or the diagram.json format guide.
> Invented part types are not allowed.

## Hardware Categories (v1)

**CORE** — ESP32 DevKitC V4, DHT22, LDR, Relay Module, Breadboard
**OPTIONAL** — DS18B20, NTC Temperature, HC-SR04, PIR, Buzzer, LED, Pushbutton
**FUTURE** — BMP180, OLED/LCD, microSD, RTC, Stepper, Servo

There is no dedicated native Wokwi part for a Soil Moisture Sensor
(verified). It stays in CORE only as a workaround (see below), not as a
canonical part.

## Phase 1 — Component Pinout Database
- Create a `components.json` file defining the pinout for each verified
  sensor:
  ```json
  {
    "wokwi-dht22": {
      "status": "verified",
      "interface": "digital",
      "power": ["VCC"],
      "ground": ["GND"],
      "data": ["SDA"],
      "preferred_gpio": 4
    },
    "wokwi-photoresistor-sensor": {
      "status": "verified",
      "interface": "analog",
      "power": ["VCC"],
      "ground": ["GND"],
      "data": ["AO"],
      "preferred_gpio": 35
    },
    "wokwi-relay-module": {
      "status": "verified",
      "interface": "digital",
      "power": ["VCC"],
      "ground": ["GND"],
      "data": ["IN"],
      "preferred_gpio": 26
    },
    "soil-moisture": {
      "status": "no-native-part",
