// ArduinoC.h
#pragma once

#include <Arduino.h>
#include <EEPROM.h>
#define EEPROM_SIZE 1

class Setting {
private:
	int save;
	int sensorValue;
	int z;
	float voltage;
	bool MyflagOne;
	bool MyflagTwo;
public:
	void init();
	//void LifeCyclePredicting();
	void run();

};

