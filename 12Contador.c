#include "easypio.h"
#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <errno.h>
#include <string.h>

extern int led[],pulsadores[],llaves[],m,contador,serial_port;

int Contador(void)
{
	int i=0,j=0,b=0;

	char dat='w';//Inicializamos con un valor que no seleccione ningun opcion

	for (int c=0;c<contador;c++)
	{
	//Manejo desde pc
	
	if(serialDataAvail(serial_port))//Verifica que el puerto este disponible devolviendo el numero 1, en caso contrario -1
		{
			dat = serialGetchar (serial_port);//Retorna el proximo caracter disponible en el puerto		
		}
		
		if(dat=='s' || dat=='u' || dat=='d')//s:salir u:up d:down
		{

		if(dat=='s')
		{
		for(int ba=0;ba<8;ba++)
			{
			digitalWrite (led[ba],0);
			}
			return 1;	 //Si ponemos " exit (1) " sale de todo el programa, y estamos buscando que salga de la secuencia. 
		}
		
		if(dat=='d' && contador > 10000)//Disminuye el delay producido por contador
		{
			contador=contador - 5000;
			printf("%d\n",contador);
			i++;
					
		}
		if(dat=='u' && contador < 90000)//Aumenta el delay producido por contador
		{
			contador=contador + 5000;
			printf("%d\n",contador);
			j++;
		}

	}
	
	//Manejo desde Raspberry
	
	
		if((digitalRead(pulsadores[0]) && digitalRead(pulsadores[1])) )
		{
			for(int ba=0;ba<8;ba++)
			{
			digitalWrite (led[ba],0);
			}
			return 1;//Volver al menu principal
		}
		if(digitalRead(pulsadores[0]) && i<1 && contador < 90000 )//Aumenta el delay producido por contador
		{
			contador=contador + 5000;
			printf("%d\n",contador);
			i++;
		}
		if(digitalRead(pulsadores[1]) && j<1 && contador>10000)//Disminuye el delay producido por contador
		{
			contador=contador - 5000;
			printf("%d\n",contador);
			j++;

		}
	}
return 0;
}
