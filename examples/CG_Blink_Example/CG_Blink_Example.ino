#include <cg_blinking.h>

void setup(){
	setup_CG_Blink();
}
void loop(){
	CG_Blink(250);
	CG_Blink(1000);
	CG_Blink(250);
	CG_Blink(1000);
}