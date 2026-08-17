from datetime import datetime, timezone

from fastapi import FastAPI
from pydantic import BaseModel, Field


app = FastAPI(
    title="Smart Agriculture Sensor API",
    version="0.1.0",
)


class SensorPayload(BaseModel):
    device_id: str = Field(min_length=1, max_length=64)
    timestamp: datetime

    temperature: float = Field(ge=-40, le=85)
    humidity: float = Field(ge=0, le=100)
    soil_moisture: float = Field(ge=0, le=100)
    light_intensity: float = Field(ge=0, le=200000)


@app.get("/health")
def health():
    return {"status": "ok"}


@app.post("/api/v1/sensors")
def receive_sensor_data(payload: SensorPayload):
    return {
        "success": True,
        "message": "Sensor data accepted",
        "device_id": payload.device_id,
        "received_at": datetime.now(timezone.utc),
    }
