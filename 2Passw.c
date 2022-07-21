#include <curses.h>
#include <stdlib.h>
#define tam 6 //Tamanio de constrasenia
#define intro 10 //valor ASCII de enter

extern int psw; //Flag de Menu

void Password(void){
	char password[tam];
	char contra[]="bokee";
	int pos,p,ch,u,i,k=0;
	
	initscr();//Iniciamos el modo Ncurses
	noecho();//Iniciamos modo que permite Ncurses, que tiene la funcion no mostrar lo que ingresa el usuario
	
	for(u=0;u<3;u++){
					
		p=0;
		pos=0;
		k=0;
	system("clear");	
	printw("Ingrese la contrasenia:\n");
	
	while(true){
					
					
			ch=getch();

			if(ch == intro) break;  
			else{                    
				
				printw("%c", '*');
				password[pos++] = ch;
				password[pos] = '\0';
				k++;
			}
		 }
		for(i=0;i<tam;i++)
		{
		if(k>=6){
			printw("Contrasenia no valida \n");
			p=1;
			break;
			}

		if(password[i]!=contra[i])
		{
			printw("Contrasenia no valida \n");
			p=1;
			break;
			}	
	 	}
		if(p==0)
		{
			printw("\nBIENVENIDO AL SISTEMA\n");
			psw=1;
			break;
		}
		
	     
}

system("clear");
if(p==1)
{
	printw("\nDemasiados Intentos");
}

getch();
echo();
endwin();

}
