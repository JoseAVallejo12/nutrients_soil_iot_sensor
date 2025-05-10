#ifndef STORAGE_SD_H
#define STORAGE_SD_H
#include "dto_models.h"

void initSD();
void saveDataToSD(const PublishMessage& data);

#endif