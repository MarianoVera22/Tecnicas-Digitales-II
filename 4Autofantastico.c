#include "easypio.h"
#include <stdio.h>
#include <stdlib.h>

extern int led[],pulsadores[],llaves[],m;
int Contador(void);

void AutoFantastico (void)
{
	int i;
	
	system("clear");
	printf("Auto Fantastico\n");
	printf("Manejo local:\nPara salir presione los dos pulsadores\nManejo Remoto:\nPara salir presione s\n");
	

while (m==0)//condicion para que siga ejecutandose la secuencia
{
	for (i=0;i<8;i++)//recorrido de led 0 al 7 
	{
	digitalWrite(led [i], 1);
	m=Contador();//mientras la funcion contador no devuelva un 1 seguira ejectuandose
	if(m==1)
	{
	break;	
	}
	
	digitalWrite(led [i], 0);
	m=Contador();
	if(m==1)
	{
		break;	
	}
	}
    
	for (i=7;i>-1;i--)//recorrido de led 7 al 0 
	{ 
    digitalWrite(led [i], 1);
	m=Contador();
	if(m==1)
	{
		break;	
	}
	digitalWrite(led [i], 0);
	m=Contador();
	if(m==1)
	{
		break;	
	}
	}
}

m=0;
system("clear");
}



 
