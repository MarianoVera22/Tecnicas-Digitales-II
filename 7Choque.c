#include <stdio.h>
#include <stdlib.h>
#include "easypio.h"

extern int led[],pulsadores[],llaves[],m;
int Contador(void);

void Choque(void){

	int i=0;
	system("clear");
	printf("El Choque\n");
	printf("Manejo local:\nPara salir presione los dos pulsadores\nManejo Remoto:\nPara salir presione s\n");
	
    while(m==0)
    {
        for(i=0;i<4;i++)//recorrido hacia adentro
		{
			digitalWrite(led[i],1);
			digitalWrite(led[7-i],1);
			m=Contador();
				if(m==1){
				break;
				}
			digitalWrite(led[i],0);
			digitalWrite(led[7-i],0);
			m=Contador();
				if(m==1){
				break;
				}
        }
	
	for(i=3;i>-1;i--)//recorrido hacia afuera
	{
		digitalWrite(led[i],1);
		digitalWrite(led[7-i],1);
		m=Contador();
			if(m==1){
			break;
			}
        digitalWrite(led[i],0);
        digitalWrite(led[7-i],0);
		m=Contador();
			if(m==1){
			break;
			}
        }
}
m=0;
system("clear");
}
