#ifndef MQTT_CLIENT_H
#define MQTT_CLIENT_H
#include "dto_models.h"

extern bool isMQTTConnected;

void initMqttClient();
void sendMQTTData(const PublishMessage& data);
bool mqttIsConnected();
void reconnectMqtt();

#endif