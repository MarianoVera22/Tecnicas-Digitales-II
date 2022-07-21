#include "easypio.h"

extern int led[],pulsadores[],llaves[]; 

void Configuracion(void)
{
	pioInit();
	//Inicializacion de leds
	for(int i=0;i<8;i++){
		pinMode(led[i],OUTPUT);
		}
	//Inicializacion de pulsadores
	for(int i=0;i<2;i++){
		pinMode(pulsadores[i],INPUT);
		}
	//Inicializacion de llaves
	for(int i=0;i<4;i++){
		pinMode(llaves[i],INPUT);
		}
}
