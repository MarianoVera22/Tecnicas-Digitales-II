#include <stdio.h>
#include <stdlib.h>
#include "easypio.h"

int Contador(void);
extern int led[],m;

void Apilada(void){
    int i,j;

    system("clear");
    printf("Apilada\n");
	printf("Manejo local:\nPara salir presione los dos pulsadores\nManejo Remoto:\nPara salir presione s\n");

    while(m==0){

        for(j=7;j>-1;j--){
            for(i=0;i<=j;i++){
                digitalWrite(led[i],1);
                m=Contador();
				if(m==1){
					break;
				}
                digitalWrite(led[i],0);
                }
			if(m==1){
				break;
			}
            digitalWrite(led[j],1);
            delayMillis(200);
            digitalWrite(led[j],0);
            delayMillis(200);
            digitalWrite(led[j],1);
            delayMillis(200);
            digitalWrite(led[j],0);
            delayMillis(200);
            digitalWrite(led[j],1);
        }
        for(i=0;i<8;i++){
            digitalWrite(led[i],0);
        }
    }
    m=0;
	system("clear");
}
