#include "easypio.h"
#include <stdio.h>
#include <stdlib.h>


extern int led[],pulsadores[],llaves[],m;
int Contador(void);

void Carrera(void)
{
    
    int h,k;
    int tabla [16][8]= {{1,0,0,0,0,0,0,0},
                        {1,0,0,0,0,0,0,0},
                        {0,1,0,0,0,0,0,0},
                        {0,1,0,0,0,0,0,0},
                        {0,0,1,0,0,0,0,0},
                        {0,0,1,0,0,0,0,0},
                        {0,0,0,1,0,0,0,0},
                        {0,0,0,1,0,0,0,0},
                        {1,0,0,0,1,0,0,0},
                        {0,1,0,0,1,0,0,0},
                        {0,0,1,0,0,1,0,0},
                        {0,0,0,1,0,1,0,0},
                        {0,0,0,0,1,0,1,0},
                        {0,0,0,0,0,1,1,0},
                        {0,0,0,0,0,0,1,1},
                        {0,0,0,0,0,0,0,1}
			};
    

    system("clear");
    printf("Carrera\n");
	printf("Manejo local:\nPara salir presione los dos pulsadores\nManejo Remoto:\nPara salir presione s\n");
    
    
while (m==0)
{
    for (k=0;k<16;k++)//Recorrido de filas
    {
        m=Contador();
		if(m==1){
			break;
		}
        for (h=0;h<8;h++)//Recorrido de columnas
        {
            digitalWrite(led [h],tabla [k][h]);
        }
    }
}
m=0;
system("clear");
}
