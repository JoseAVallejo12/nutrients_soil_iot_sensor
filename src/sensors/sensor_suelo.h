#ifndef SENSOR_SUELO_H
#define SENSOR_SUELO_H
#include "./core/dto_models.h"

void initNPKSensor();
SensorNpkData readSoilData();

#endif