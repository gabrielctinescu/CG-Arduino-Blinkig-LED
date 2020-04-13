#include <cg_blinking.h>
#include "Arduino.h"




void setup_CG_Blink(){
	
	pinMode(LED_BUILTIN, OUTPUT);	
	
}

void CG_Blink(int durata){
	digitalWrite(LED_BUILTIN, HIGH);
	delay(durata);
	digitalWrite(LED_BUILTIN, LOW);
	delay(durata);
	
}