#ifndef SENSOR_DHT_H
#define SENSOR_DHT_H

#include "./core/dto_models.h"

void initDTHSensor();
SensorDthData readEnvironmentData();

#endif
