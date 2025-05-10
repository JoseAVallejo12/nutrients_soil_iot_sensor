#include <Arduino.h>
#include "./sensors/sensor_dht.h"
#include "./sensors/sensor_suelo.h"
#include "./display_touch/display_touch.h"
#include "./core/dto_models.h"
#include "./core/mqtt_client.h"
#include "./core/storage_sd.h"
#include "./core/wifi_connect.h"

#define DELAY 1000

void setup() {
  Serial.begin(115200);
  initDisplay();
  initNPKSensor();
  initDTHSensor();
  initSD();
  initWiFi();
  initMqttClient();
}

void loop() {
  SensorNpkData soilData = readSoilData();
  SensorDthData envData = readEnvironmentData();
  PublishMessage data = { soilData, envData };
  displaySensorsData(data);
  saveDataToSD(data);
  handleTouchEvents();

   if (isWiFiConnected) {
    if (!isMQTTConnected) {
      reconnectMqtt();
    }
    if (isMQTTConnected) {
      sendMQTTData(data);
    }
  }

  delay(DELAY);
}