# Smart Agriculture Platform Architecture

## Status

Draft — Phase 0.

## System Flow

Sensors
→ Arduino Uno
→ USB Serial
→ Laptop Backend API
→ Data / Rules
→ Dashboard
→ Control Decision
→ Arduino Uno
→ Relay
→ Pump / Fan / Motor

## Design Principles

1. Sensor data is treated as observed evidence.
2. Control decisions must be traceable.
3. Automation must be rule-based and auditable in the initial MVP.
4. Hardware-specific implementation must remain isolated from backend logic.
5. CI must verify firmware and backend changes independently.
6. No production automation is assumed until hardware and safety behavior
   are explicitly verified.

## Current Decision

Arduino Uno is the target edge controller for the initial IoT prototype.

The Arduino Uno communicates with the laptop backend through USB Serial.
The laptop hosts the backend and dashboard-side services; controller-to-backend
communication is not based on Wi-Fi or other network transport in the current MVP.

The exact sensor modules and actuator interfaces will be validated before
firmware implementation is finalized.
