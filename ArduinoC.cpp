// 
// 
// 

#include "ArduinoC.h"


void Setting::init() {

	
	MyflagOne = false;
	MyflagTwo = false;
	save = 0;


	EEPROM.begin(EEPROM_SIZE);
	save = EEPROM.read(0);
	Serial.print("Cycle ");
	Serial.println(save);
}
void Setting::run() {
	sensorValue = analogRead(A0);
	voltage = sensorValue * (5 / 1023.0);
	z = map(voltage, 0, 4.2, 0, 100);
	if (z < 100 && z>70) {
		MyflagOne = true;

	}
	if (z == 100) {
		MyflagTwo = true;

	}

	if ((MyflagOne == true) && (MyflagTwo == true) && (z == 100)) {
		save = EEPROM.read(0);
		save += 1;
		EEPROM.write(0, save);
		EEPROM.commit();
		Serial.print("New Cycle ");
		Serial.println(save);

		MyflagTwo = false;
		MyflagOne = false;


	}
}

