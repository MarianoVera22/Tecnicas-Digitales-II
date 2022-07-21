#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <pcf8591.h>
#include "easypio.h"
#define Address 0x48
#define BASE 64
#define A BASE + 3

extern int pulsadores[], contador;

void Velocidad_inicial(void){
	  int val;
	  if (wiringPiSetup () == -1) exit (1);
       pcf8591Setup(BASE, Address);
		
	do{
		system("clear");
		printf("Posicione el potenciometro para seleccionar el contador inicial, luego pulse los dos pulsadores para salir\n");
		printf("El contador tiene que ser mayor a 10000\n");

		val = (analogRead(A)*314)+10000;//Lectura de conversor y escalado

		printf("Valor = %d \n", val);
	
		if(val<10000){//Limite del valor inferior
			printf("Seleccione otra velocidad porque es menor que la permitida\n");
			printf("Velocidad = 10000\n");
			contador=10000;
		}
		else{
			contador=val;	
			printf("Velocidad = %d \n", val);
			}
		delay(200);
	}while(!digitalRead(pulsadores[1])&&!digitalRead(pulsadores[0]));
	
	system("clear");
	printf("La velocidad quedo fijada en: %d \n", contador);
	delay (1000);
}

