# Smart Agriculture Platform — Contracts

## Status

Draft — Sensor Payload Schema v0.1.
Not approved. Not implementation-ready.

## 1. Sensor Payload Schema v0.1

| Field | Data Type | Description |
|---|---|---|
| timestamp | String | Time of sensor reading |
| temperature | Float | Ambient temperature |
| humidity | Float | Ambient humidity |
| soil_moisture | Float | Soil moisture level |
| light_intensity | Integer | Light intensity |
| pH_level | Float | Soil pH level |

## 2. Unresolved Decisions

### 2.1 Units
- temperature unit: unresolved
- humidity unit: unresolved
- soil_moisture representation/unit: unresolved
- light_intensity unit: unresolved

### 2.2 Timestamp
Exact timestamp format and timezone semantics are unresolved.

### 2.3 Device Identity
Whether `device_id` is required is unresolved.

### 2.4 Location Identity
Whether `location_id`, field ID, plot ID, or another location identifier is required is unresolved.

### 2.5 Sensor Evidence / Validation Metadata
Whether sensor validity/status metadata belongs in the payload or is handled by the backend is unresolved.

### 2.6 Valid Ranges
Authoritative validation ranges for each sensor value are unresolved.

### 2.7 Field Presence and Invalid-Value Semantics
Whether each field is required, optional, or nullable is unresolved.
Behavior when a field is missing, null, or invalid (e.g. rejected, stored as-is, flagged) is unresolved.
How downstream consumers (backend, dashboard) should handle missing or invalid values is unresolved.

## 3. Architecture Constraints

The following existing architecture principles apply:

1. Sensor data is observed evidence.
2. Control decisions must be traceable.
3. Automation must be rule-based and auditable.
4. Hardware-specific implementation remains isolated from backend logic.
5. No production automation is assumed until hardware and safety behavior are explicitly verified.

## 4. Contract Governance

This document records proposals and unresolved decisions only.

No implementation may treat Sensor Payload Schema v0.1 as an approved API contract.

The contract becomes implementation-ready only after the unresolved decisions are explicitly resolved and human-approved.

## 5. Next Dependency

The Backend API Contract v1 must not be finalized by any agent until the Sensor Payload Contract has been explicitly reviewed and human-approved.
