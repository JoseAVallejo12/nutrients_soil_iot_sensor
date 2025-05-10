#ifndef DTO_MODELS_H
#define DTO_MODELS_H
#include <Arduino.h>

typedef struct
{
  float humedadSuelo;
  int npk;
  float ph;
  float ec;

} SensorNpkData;

typedef struct
{
  float temperatura;
  float humedad;
  bool valid;

} SensorDthData;

typedef struct
{
  SensorNpkData npk;
  SensorDthData dht;
} PublishMessage;

#endif