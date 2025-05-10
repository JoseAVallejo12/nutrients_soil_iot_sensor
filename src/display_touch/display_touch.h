#ifndef DISPLAY_TOUCH_H
#define DISPLAY_TOUCH_H
#include "./core/dto_models.h"

void initDisplay();
void displaySensorsData(const PublishMessage& data);
void showMessage(const char* msg);
bool isTouchPressed();
void handleTouchEvents();

#endif
