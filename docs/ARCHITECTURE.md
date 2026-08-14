# Smart Agriculture Platform Architecture

## Status

Draft — Phase 0.

## System Flow

Sensors
→ ESP32 Edge Controller
→ Network Transport
→ Backend API
→ Data / Rules
→ Dashboard
→ Control Decision
→ Pump / Valve

## Design Principles

1. Sensor data is treated as observed evidence.
2. Control decisions must be traceable.
3. Automation must be rule-based and auditable in the initial MVP.
4. Hardware-specific implementation must remain isolated from backend logic.
5. CI must verify firmware and backend changes independently.
6. No production automation is assumed until hardware and safety behavior
   are explicitly verified.

## Current Decision

ESP32 is the target edge-controller family for the initial IoT prototype.

The exact ESP32 board and sensor modules will be selected before firmware
implementation is finalized.
