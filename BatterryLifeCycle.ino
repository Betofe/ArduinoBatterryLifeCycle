/*
 Name:		BatterryLifeCycle.ino
 Created:	11/24/2022 10:10:29 AM
 Author:	Imami Joel Betofe
*/
#include "ArduinoC.h"
#include "ArduinoC.h"

Setting set;
// the setup function runs once when you press reset or power the board
void setup() {

	Serial.begin(9600);
	Serial.print("Cycle ");
	Serial.println(EEPROM.read(0));
	set.init();
	
}

// the loop function runs over and over again until power down or reset
void loop() {
	 set.run();
}
