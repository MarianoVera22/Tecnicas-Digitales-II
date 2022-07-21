#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <errno.h>
#include <string.h>


extern int serial_port;

void Comunicacion_serie(void)
{
	int aux,p=0;
	char str;
    serial_port = serialOpen ("/dev/serial0", 9600); //Abre el puerto serie si todo esta en orden
  	if ( serial_port < 0){			
    		fprintf (stderr, "ERROR: %s\n", strerror (errno)) ;
    		
  	}

	if (wiringPiSetup () == -1){//Inicia configuracion de wiringPi
    	fprintf (stdout, "ERROR: %s\n", strerror (errno)) ;
    	
  	}

	do{
		system("clear");
		printf("Comunicacion serie:\n\nIngrese un numero \n\t1-Auto Fantastico\n\t2-Carrera\n\t3-Apilada\n\t4-Choque\n\t5-Cortina\n\t6-Gusano\n\t7-Barrido\n\t8-Navidad\n\n\t9-Salir\n");
	  printf("Recibiendo datos desde el otro dispositivo\n");
	 
		  str= serialGetchar(serial_port);//Almacena el dato en la variable str
		  
		  printf ("%c", str);
		  serialFlush(serial_port);//Limpia el bus de datos
	
	switch(str){

		case '1':
		{
		aux=contador;//Variable auxiliar para respaldar la variable original de contador
		AutoFantastico();
		contador=aux;//Respaldo
		break;
		}
		case '2':
		{
		aux=contador;
		Carrera();
		contador=aux;
		break;
		}
		case '3':
		{
		aux=contador;
		Apilada();
		contador=aux;
		break;
		}
		case '4':
		{
		aux=contador;
		Choque();
		contador=aux;
		break;
		}
		case '5':
		{
		aux=contador;
		Cortina();
		contador=aux;
		break;
		}
		case '6':
		{
		aux=contador;
		Gusano();
		contador=aux;
		break;
		}
		case '7':
		{
		aux=contador;
		Barrido();
		contador=aux;
		break;
		}
		case '8':
		{
		aux=contador;
		Navidad();
		contador=aux;
		break;
		}
		case '9':
		{
			p=1;//Asigna el valor 1 a p para salir de la sentencia do/while
		break;
		}
		default:
		{

		printf("\nSeleccion no valida\n\n");
		delay(1000);
		break;
		}
}
}while(p!=1);

}
