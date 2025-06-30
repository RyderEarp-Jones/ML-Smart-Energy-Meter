
/**
 * Configuration parameters
 * Replace the placeholders with your actual network credentials
 * and MQTT broker settings before flashing.
 */
#pragma once

// Wi‑Fi credentials
#define WIFI_SSID     "YOUR_WIFI_SSID"
#define WIFI_PASSWORD "YOUR_WIFI_PASSWORD"

// MQTT broker
#define MQTT_BROKER    "192.168.1.100"
#define MQTT_PORT      1883
#define MQTT_USER      "mqtt_user"
#define MQTT_PASSWORD  "mqtt_pass"

// Device identity
#define DEVICE_ID      "esp32_energy_meter_01"

// MQTT topics
#define TOPIC_PUBLISH        "home/energy/" DEVICE_ID "/telemetry"
#define TOPIC_CLASSIFICATION "home/energy/" DEVICE_ID "/appliance"
