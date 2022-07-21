#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <curses.h>
#include <termios.h>

//Función principal
int main(){
	
	//Declaramos variables
	int fd,a=0,ch,q;		//file descriptor -indicador del fichero-
	char c[2];
	char opt;
	

	
	//CREAR ARCHIVO
	//O_WRONLY abre el archivo "/dev/ttyUSB0" en modo escritura
	//S_IRUSR|S_IWUSR son los modos que seleccione: Lectura y Escritura para el usuario
	fd = open("/dev/ttyUSB0",O_WRONLY|S_IRUSR|S_IWUSR);
	
	//Menu de opciones
	if(fd != -1){								//Verificamos si hay error al abrir el puerto
		
		
		do{
			system("clear");
			
			printf("Comunicacion serie:\n\nIngrese un numero \n\t1-Auto Fantastico\n\t2-Carrera\n\t3-Apilada\n\t4-Choque\n\t5-Cortina\n\t6-Gusano\n\t7-Barrido\n\t8-Navidad\n\n\t9-Salir\n");
			ch='x';
			a=0;
			scanf("%s",&opt);		
			switch(opt){
			case '1':
			{
				strcpy(c,"1");
				write(fd,&c,sizeof(c));
				fflush(stdin);
				system("clear");
				initscr();//Iniciamos el modo Ncurses
				clear();
				printw("La secuencia se esta ejecutando\n");
				printw("Opciones:\n\n\tUP=Subir Velocidad\n\tDOWN=Bajar Velocidad\n\ts=Salir\n");
				
				echo();
				do{
					
					q=getch();//ESC o s
					if(q==115)// ASCII de s
					{
						strcpy(c,"s"); //Copia s a la variable c
						write(fd,&c,sizeof(c)); //Copia el contenido de c en fd
						fflush(stdin); //Limpia el bus de datos
						a=1;
						
					}
					else{
						getch();//[
						ch=getch();// A o B
						if(ch==65)//ASCII de A
						{
							strcpy(c,"u");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
						if(ch==66)//ASCII de B
						{
							strcpy(c,"d");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
					}
				}while(a!=1);
				
				endwin();
				break;
			}
			
			case '2':
			{
				strcpy(c,"2");
				write(fd,&c,sizeof(c));
				fflush(stdin);
				system("clear");
				initscr();//Iniciamos el modo Ncurses
				clear();
				printw("La secuencia se esta ejecutando\n");
				printw("Opciones:\n\n\tUP=Subir Velocidad\n\tDOWN=Bajar Velocidad\n\ts=Salir\n");
				
				echo();
				do{
					
					q=getch();//ESC o s
					if(q==115)// ASCII de s
					{
						strcpy(c,"s");
						write(fd,&c,sizeof(c));
						fflush(stdin);
						a=1;
						
					}
					else{
						getch();//[
						ch=getch();// A o B
						if(ch==65)//ASCII de A
						{
							strcpy(c,"u");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
						if(ch==66)//ASCII de B
						{
							strcpy(c,"d");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
					}
				}while(a!=1);
				
				endwin();
				break;
			}
			case '3':
			{
				strcpy(c,"3");
				write(fd,&c,sizeof(c));
				fflush(stdin);
				system("clear");
				initscr();//Iniciamos el modo Ncurses
				clear();
				printw("La secuencia se esta ejecutando\n");
				printw("Opciones:\n\n\tUP=Subir Velocidad\n\tDOWN=Bajar Velocidad\n\ts=Salir\n");
				
				echo();
				do{
					
					q=getch();//ESC o s
					if(q==115)// ASCII de s
					{
						strcpy(c,"s");
						write(fd,&c,sizeof(c));
						fflush(stdin);
						a=1;
						
					}
					else{
						getch();//[
						ch=getch();// A o B
						if(ch==65)//ASCII de A
						{
							strcpy(c,"u");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
						if(ch==66)//ASCII de B
						{
							strcpy(c,"d");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
					}
				}while(a!=1);
				
				endwin();
				break;
			}
			case '4':
			{
				strcpy(c,"4");
				write(fd,&c,sizeof(c));
				fflush(stdin);
				system("clear");
				initscr();//Iniciamos el modo Ncurses
				clear();
				printw("La secuencia se esta ejecutando\n");
				printw("Opciones:\n\n\tUP=Subir Velocidad\n\tDOWN=Bajar Velocidad\n\ts=Salir\n");
				
				echo();
				do{
					
					q=getch();//ESC o s
					if(q==115)// ASCII de s
					{
						strcpy(c,"s");
						write(fd,&c,sizeof(c));
						fflush(stdin);
						a=1;
						
					}
					else{
						getch();//[
						ch=getch();// A o B
						if(ch==65)//ASCII de A
						{
							strcpy(c,"u");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
						if(ch==66)//ASCII de B
						{
							strcpy(c,"d");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
					}
				}while(a!=1);
				
				endwin();
				break;
			}
			case '5':
			{
				strcpy(c,"5");
				write(fd,&c,sizeof(c));
				fflush(stdin);
				system("clear");
				initscr();//Iniciamos el modo Ncurses
				clear();
				printw("La secuencia se esta ejecutando\n");
				printw("Opciones:\n\n\tUP=Subir Velocidad\n\tDOWN=Bajar Velocidad\n\ts=Salir\n");
				
				echo();
				do{
					
					q=getch();//ESC o s
					if(q==115)// ASCII de s
					{
						strcpy(c,"s");
						write(fd,&c,sizeof(c));
						fflush(stdin);
						a=1;
						
					}
					else{
						getch();//[
						ch=getch();// A o B
						if(ch==65)//ASCII de A
						{
							strcpy(c,"u");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
						if(ch==66)//ASCII de B
						{
							strcpy(c,"d");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
					}
				}while(a!=1);
				
				endwin();
				break;
			}
			case '6':
			{
				strcpy(c,"6");
				write(fd,&c,sizeof(c));
				fflush(stdin);
				system("clear");
				initscr();//Iniciamos el modo Ncurses
				clear();
				printw("La secuencia se esta ejecutando\n");
				printw("Opciones:\n\n\tUP=Subir Velocidad\n\tDOWN=Bajar Velocidad\n\ts=Salir\n");
				
				echo();
				do{
					
					q=getch();//ESC o s
					if(q==115)// ASCII de s
					{
						strcpy(c,"s");
						write(fd,&c,sizeof(c));
						fflush(stdin);
						a=1;
						
					}
					else{
						getch();//[
						ch=getch();// A o B
						if(ch==65)//ASCII de A
						{
							strcpy(c,"u");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
						if(ch==66)//ASCII de B
						{
							strcpy(c,"d");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
					}
				}while(a!=1);
				
				endwin();
				break;
			}
			case '7':
			{
				strcpy(c,"7");
				write(fd,&c,sizeof(c));
				fflush(stdin);
				system("clear");
				initscr();//Iniciamos el modo Ncurses
				clear();
				printw("La secuencia se esta ejecutando\n");
				printw("Opciones:\n\n\tUP=Subir Velocidad\n\tDOWN=Bajar Velocidad\n\ts=Salir\n");
				
				echo();
				do{
					
					q=getch();//ESC o s
					if(q==115)// ASCII de s
					{
						strcpy(c,"s");
						write(fd,&c,sizeof(c));
						fflush(stdin);
						a=1;
						
					}
					else{
						getch();//[
						ch=getch();// A o B
						if(ch==65)//ASCII de A
						{
							strcpy(c,"u");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
						if(ch==66)//ASCII de B
						{
							strcpy(c,"d");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
					}
				}while(a!=1);
				
				endwin();
				break;
			}
			case '8':
			{
				strcpy(c,"8");
				write(fd,&c,sizeof(c));
				fflush(stdin);
				system("clear");
				initscr();//Iniciamos el modo Ncurses
				clear();
				printw("La secuencia se esta ejecutando\n");
				printw("Opciones:\n\n\tUP=Subir Velocidad\n\tDOWN=Bajar Velocidad\n\ts=Salir\n");
				
				echo();
				do{
					
					q=getch();//ESC o s
					if(q==115)// ASCII de s
					{
						strcpy(c,"s");
						write(fd,&c,sizeof(c));
						fflush(stdin);
						a=1;
						
					}
					else{
						getch();//[
						ch=getch();// A o B
						if(ch==65)//ASCII de A
						{
							strcpy(c,"u");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
						if(ch==66)//ASCII de B
						{
							strcpy(c,"d");
							write(fd,&c,sizeof(c));
							fflush(stdin);
							
						}
					}
				}while(a!=1);
				
				endwin();
				break;
			}
			
			case '9':
			{
				strcpy(c,"9");
				write(fd,&c,sizeof(c));	
				fflush(stdin);
				opt='0';
				break;	
			}
			
			}
		}while(opt!='0');
		printf("\nSalida");
		
		close(fd);
		
		
		//CERRAR ARCHIVO
	}
}
