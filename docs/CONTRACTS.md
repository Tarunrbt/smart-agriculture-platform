# Smart Agriculture Platform — Contracts

## Status

Draft — Sensor Payload Schema v0.1.
Not approved. Not implementation-ready.

## 1. Sensor Payload Schema v0.1

| Field | Data Type | Description |
|---|---|---|
| timestamp | String | Time of sensor reading |
| device_id | String | Unique application-level device identifier |
| location_id | String | Identifier for the sensor deployment location |
| temperature | Float | Ambient temperature |
| humidity | Float | Ambient humidity |
| soil_moisture | Float | Soil moisture level |
| light_intensity | Integer | Light intensity |
| pH_level | Float | Soil pH level |

## 2. Contract Decisions

### 2.1 Units — RESOLVED

- temperature unit: Celsius (°C)
- humidity unit: Relative Humidity, % (percentage scale; 0–100 denotes the unit's numeric range only, not an authoritative validation range — see §2.6)
- soil_moisture unit: % (Volumetric Water Content convention), hardware-agnostic
- light_intensity unit: Lux

### 2.2 Timestamp — PARTIALLY RESOLVED

Format: ISO 8601 UTC (`YYYY-MM-DDTHH:MM:SSZ`).

Unresolved: timestamp source — whether the timestamp is set by the edge device (ESP32) or stamped on arrival by the backend is undecided.

### 2.3 Device Identity — RESOLVED

`device_id` is required.

Each deployed device must have a unique application-level identifier.

The identifier format and assignment mechanism remain unresolved.

### 2.4 Location Identity — RESOLVED

`location_id` is required.

Each sensor deployment must be associated with a location identifier.

The location hierarchy and assignment mechanism remain unresolved.

### 2.5 Sensor Evidence / Validation Metadata

Whether sensor validity/status metadata belongs in the payload or is handled by the backend is unresolved.

### 2.6 Valid Ranges

Authoritative validation ranges for each sensor value are unresolved.

### 2.7 Field Presence and Invalid-Value Semantics

Current field-presence decisions:

- `device_id`: required and non-null.
- `location_id`: required and non-null.
- `timestamp`: required/nullable/omittable status remains unresolved.
- `temperature`: required/nullable/omittable status remains unresolved.
- `humidity`: required/nullable/omittable status remains unresolved.
- `soil_moisture`: required/nullable/omittable status remains unresolved.
- `light_intensity`: required/nullable/omittable status remains unresolved.
- `pH_level`: required/nullable/omittable status remains unresolved.

Behavior when a field is missing, null, or invalid (e.g. rejected, stored as-is, flagged) remains unresolved.

How downstream consumers (backend, dashboard) should handle missing, null, or invalid values remains unresolved and must not be inferred as an approved contract behavior.

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

This pull request (bugFix → main) must not be merged until all decisions in Section 2 are resolved and explicitly human-approved.
