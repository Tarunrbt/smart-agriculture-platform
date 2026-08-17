# Smart Agriculture Platform

# Smart Agriculture Platform

<a href="https://github.com/Tarunrbt/smart-agriculture/actions/workflows/ci.yml">
  <img src="https://github.com/Tarunrbt/smart-agriculture/actions/workflows/ci.yml/badge.svg?branch=main" alt="Smart Agriculture CI">
</a>

IoT-based smart agriculture platform for sensor monitoring,
data collection, automation, and agricultural decision support.

IoT-based smart agriculture platform for sensor monitoring,
data collection, automation, and agricultural decision support.

## Initial Architecture

Sensors → Arduino Uno → USB Serial → Laptop Backend → Dashboard

The Arduino Uno is the edge controller. The laptop hosts the backend and
communicates with the Arduino Uno through USB Serial.

## Current Phase

Phase 0 — Repository and architecture foundation.

## Planned Components

- Arduino Uno-based edge controller
- Soil moisture sensing
- Temperature and humidity sensing
- Rain detection
- Sensor data ingestion
- Backend API
- Dashboard
- Rule-based irrigation control
- Relay-controlled pump/fan/motor actuation
- Automated firmware build and verification through GitHub Actions

## Development Environment

Local development may be performed from Termux.

Firmware builds will be verified in a Linux CI environment through
GitHub Actions where required.
