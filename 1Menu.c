//incluimos todos los programas externos a Menu
#include "2Passw.c"
#include "3ConfiguracionIO.c"
#include "4Autofantastico.c"
#include "5Carrera.c"
#include "6Apilada.c"
#include "7Choque.c"
#include "8Sec1_cortina.c"
#include "9Sec2_gusano.c"
#include "10Sec3_barrido.c"
#include "11Sec4_navidad.c"
#include "12Contador.c"
#include "13Comuraspi.c"
//14SeriePC.c va en la computadora
#include "15Seteoveloci.c"


//Incluimos librerias usadas poor Menu

#include <stdio.h>
#include <stdlib.h>
#include "easypio.h"
#include <wiringPi.h>

//Inicializacion de variables

int led[8]={23,24,25,12,16,20,21,26},pulsadores[2]={17,27},llaves[4]={5,6,13,19}, contador=50000,m,psw=0,serial_port;

int main()
{

	int s,b=0,aux;
	Password(); //Llamado a funcion Password en passw.c
	if(psw==1){ //Si la contrasenia es correcta retorna 1
		Configuracion();//Llamado a funcion Configuracion de entrada/salida en configuracionIO.c
	
		while(1){
			//Menu principal
			system("clear");
			if(b==0)
			{
				printf("BIENVENIDO AL SISTEMA\n");
				b=1;
			}
			printf("Funciones de luces:\n\n1-Auto Fantastico\n2-Carrera\n3-Apilada\n4-Choque\n5-Cortina\n6-Gusano\n7-Barrido\n8-Navidad\n\nOtras funciones:\n\n9-Comunicacion Serie\n10-Cambio de velocidad\n\n11-Salir\n");
			scanf("%d",&s);
			getchar();
		
			//Lector de opcion elegida
		switch(s){
			
			case 1:{
				aux=contador; //Variable auxiliar para respaldar la variable original de contador
				AutoFantastico();
				contador=aux; //Respaldo
				break;
				}
			case 2:{
				aux=contador;
				Carrera();
				contador=aux;
				break;
				}
			case 3:{
				aux=contador;
				Apilada();
				contador=aux;
				break;
				}
			case 4:{
				aux=contador;
				Choque();
				contador=aux;
				break;
				}
			case 5:{
				aux=contador;
				Cortina();
				contador=aux;
				break;
				}
			case 6:{
				aux=contador;
				Gusano();
				contador=aux;
				break;
				}
			case 7:{
				aux=contador;
				Barrido();
				contador=aux;
				break;
				}
			case 8:{
				aux=contador;
				Navidad();
				contador=aux;
				break;
				}
			
			case 9:
			{
				Comunicacion_serie();//Llamado a comunicacion serie entre raspberry y PC
				break;
			}
			case 10:
			{
				Velocidad_inicial(); //Configuracion de velocidad inicial
				break;
			}
			case 11:
			{
				return 0;
			}
			default:{
				system("clear");
				printf("\nSeleccion no valida\n\n");
				delayMillis(1000);
				break;
				}
		}  

	}
    
}

return 0;

}
