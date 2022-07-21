#include <stdio.h>
#include <stdlib.h>
#include "easypio.h"

extern int led[],pulsadores[],llaves[],m;
int Contador(void);

void Navidad(void){
	int i;
			
	system("clear");
	printf("Navidad\n");
	printf("Manejo local:\nPara salir presione los dos pulsadores\nManejo Remoto:\nPara salir presione s\n");
	
while(m==0)
{
	for(i=0;i<8;i=i+2)//Encendido de leds pares y apagado de led impares
        {
            digitalWrite(led [i],1);
            digitalWrite(led [i+1],0);
        }
	m=Contador();
	if(m==1){
		break;
	}
   for(i=1;i<8;i=i+2)//Encendido de leds impares y apagado de led pares
        {
            digitalWrite(led [i-1],0);
            digitalWrite(led [i],1);
		}
	m=Contador();
	if(m==1){
	   break;
	}
}
m=0;
system("clear");
}
