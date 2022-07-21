#include <stdio.h>
#include <stdlib.h>
#include "easypio.h"

extern int led[],pulsadores[],llaves[],m;
int Contador(void);

void Cortina(void)
{
	int i;
	system("clear");
	printf("Cortina\n");
	printf("Manejo local:\nPara salir presione los dos pulsadores\nManejo Remoto:\nPara salir presione s\n");
    
	while(m==0)
    {
	for(i=0;i<8;i++)//Enciendo todos los leds 
	{
            digitalWrite(led[i],1);
            m=Contador();
			if(m==1){
				break;
			}
        }
        for(i=0;i<8;i++)//Apaga todos los leds 
        {
            digitalWrite(led[i],0);
            m=Contador();
			if(m==1){
				break;
			}
        }
    }
m=0;
system ("clear");
}
