# Hardware Parts List

> **Controller:** Arduino Uno + laptop backend. This is **NOT an ESP32-based build**.
>
> The current MVP uses USB Serial between the Arduino Uno and the laptop backend.

## Inventory

| Part | Status | Build Stage | Notes |
|---|---|---|---|
| Arduino Uno | Confirmed | Controller | Main edge controller; USB Serial connection to laptop backend |
| Soil moisture sensor | Confirmed | Stage 1 — Sensor acquisition | Primary soil-moisture input for irrigation decisions |
| DHT11 sensor | Likely | Stage 1 — Sensor acquisition | Temperature and humidity sensing; verify exact module before final wiring |
| Rain sensor | Likely | Stage 1 — Sensor acquisition | Rain detection; verify exact module before final wiring |
| PIR motion sensor | Likely | Stage 1 — Sensor acquisition | Motion detection; exact module to be verified |
| 16x2 LCD | Confirmed | Stage 1 — Sensor acquisition | Local display; used with I2C adapter when validated |
| Relay module | Confirmed | Stage 2 — Basic actuator control | Switching interface for pump/fan/motor; verify module ratings |
| Water DC pump/motor | Confirmed | Stage 2 — Basic actuator control | Irrigation actuator; rated voltage must be confirmed |
| Large DC fan | Confirmed | Stage 2 — Basic actuator control | Ventilation/cooling actuator; rated voltage must be confirmed |
| Yellow DC motor | Confirmed | Stage 2 — Basic actuator control | General actuator/demo motor; rated voltage must be confirmed |
| Stage 1 and Stage 2 hardware | Existing | Stage 3 — Automation | Reused by rule-based automation; no new hardware required |
| I2C LCD adapter | Likely | Stage 4 — User interface | Interface for 16x2 LCD; verify pinout/module before wiring |
| Buzzer | Visual-only / unconfirmed | Stage 4 — User interface | Small black component is visible; exact buzzer type is not confirmed |
| PIR motion sensor | Already listed | Stage 4 — User interface | Reused for motion/status behavior if required |
| Servo motor | Likely | Stage 5 — Extended actuator | Verify model, voltage, and current requirements before use |
| Breadboard | Confirmed | General prototyping | Temporary prototyping platform |
| Jumper wires | Confirmed | General prototyping | Visible in the hardware photos; used for breadboard connections |
| 7805 IC | Visual-only / unconfirmed | Unplaced / caution | Do not wire yet; exact component and power requirements must be confirmed |

## Power and Safety Caution

> **Do not wire the 7805 yet.** Confirm the power-source voltage and the rated voltage of the pump/motors first.
>
> **Never power motors or pumps directly from the Arduino Uno 5V pin.** Use an appropriate external motor/pump supply and a suitable switching/driver arrangement, with a common ground where required by the chosen circuit.

## Build Stages

### Stage 1 — Sensor acquisition

Soil moisture, DHT11, rain sensor, PIR, and 16x2 LCD.

### Stage 2 — Basic actuator control

Relay module, water pump/motor, large DC fan, and yellow DC motor.

### Stage 3 — Automation

Reuse Stage 1 and Stage 2 hardware for rule-based sensing and actuation. No new hardware is required for this stage.

### Stage 4 — User interface

I2C LCD adapter, buzzer, and the existing PIR sensor as applicable.

### Stage 5 — Extended actuator

Servo motor, after its voltage/current requirements and control behavior are verified.
