#include <stdio.h>
#include <stdlib.h>
#include "easypio.h"

extern int led[],pulsadores[],llaves[],m;
int Contador(void);

void Gusano(void){
	int i,k;
	system("clear");
	printf("Gusano\n");
	printf("Manejo local:\nPara salir presione los dos pulsadores\nManejo Remoto:\nPara salir presione s\n");

    int tabla[15][8]=
	{
        {0,0,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0},
        {0,1,0,0,0,0,0,0},
        {1,0,1,0,0,0,0,0},
        {0,1,0,1,0,0,0,0},
        {1,0,1,0,1,0,0,0},
        {0,1,0,1,0,1,0,0},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {0,0,1,0,1,0,1,0},
        {0,0,0,1,0,1,0,1},
        {0,0,0,0,1,0,1,0},
        {0,0,0,0,0,1,0,1},
        {0,0,0,0,0,0,1,0},
        {0,0,0,0,0,0,0,1},
    };
	

    while(m==0)
    {
		for(k=0;k<15;k++)//Recorrido de filas
		{
			for(i=0;i<8;i++)//Recorrido de columnas
			{
				digitalWrite(led[i],tabla[k][i]);
				m=Contador();
				if(m==1){
					break;
				}
			}
			if(m==1){
				break;
			}
		}
    }
m=0;
system("clear");
}
    
