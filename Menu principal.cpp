#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
//Librerias Propias
#include "LibreriaDibujos.h"  //Incluye todas las funciones de dibujo de ficheros.
#include "LibreriaUsuarios.h" //Incluye todas las funciones de registro/acceso de usuario.

#define M 20  //Numero maximo de caracteres para el nombre de uruario y contraseñá.
#define N 5  //Numero maximo de usuarios




//CABECERAS DE FUNCIONES
void Menu_Inicial (); //Muestra el menu de registro de usuario.
void Hora(); //Funcion para mostrar la hora en pantalla.


int main (void)
{

	int i=0;
	int j=0;
	int k=0;
	bool exito;

	int opcion1; //Menu de usuarios
    int opcion2; //menu opciones

	//Registro usuario
	char leer_nombre[M];
	char leer_clave[M];
	usuario user[N];
	int es_usuario = 0;
	int intentos=3;


	char preguntas1[][100] = {"1. Cuando se llego a America por primera vez?: ",
                            "2. En que siglo se escribio la Celestina?:",
                            "3. Cual es la capital de Italia?:",
                            "4. Como se llaman los triangulos con dos los lados iguales y uno desigual?:",
                            "5. Cuantas Champions tienes el Real Madrid Club de Futbol?:",
                            "6. Cual es el futbolista con mas balones de oro?:",
                            "7. Cuanto duro La Guerra de los Cien Anos"};

    char opciones1[][100] = {"A. 1492", "B. 1942", "C. 1932", "D. 1432",
                            "A. XV", "B. XII", "C. XVI", "D. XX",
                            "A. Madrid", "B. Roma", "C. Venecia", "D. Palermo",
                            "A. Escaleno", "B. Obstusangulo", "C. Equilatero", "D. Isosceles",
                            "A. 12", "B. 13", "C. 11", "D. 14",
                            "A. Lionel Messi", "B. Neymar", "C. Cristiano Ronaldo", "D. Diego Maradona",
                            "A. 100", "B. 102", "C. 116", "D. 115"};

   char respuestas1[] = {'A', 'A', 'B','D','B','A','C'};
   int numerodepreguntas1 = sizeof(preguntas1)/sizeof(preguntas1[0]);


   char preguntas2[][100] = {"1. Cuando se aprobo la primera Constitucion Espanola?: ",
                            "2. Quien escribio poeta en Nueva York?:",
                            "3. Cual es la capital de Letonia?:",
                            "4. que es un polinomio?:",
                            "5. Cuando se crearon los juegos olimpicos?:"};

   char opciones2[][100] = {"A. 1526", "B. 1812", "C. 1932", "D. 1978",
                            "A. Lorca", "B. Becquer", "C.Gongora", "D. Quevedo",
                            "A. Estonia", "B. Tallin", "C. Riga", "D. Palermo",
                            "A. una ecuacion", "B. un conjunto de monomios", "C. una ecuacion racional", "D. una ecuacion irracional",
                            "A. 1930", "B. 1896", "C. 1755", "D. 1495"};

   char respuestas2[] = {'B', 'A', 'C','D','B'};
   int numerodepreguntas2 = sizeof(preguntas2)/sizeof(preguntas2[0]);



   char preguntas3[][100] = {"1. Cual es el lugar mas frio de la tierra?: ",
                            "2. Quien escribio La Odisea?:",
                            "3. Cual es el rio mas largo del mundo?:",
                            "4. En que continente esta equador?:",
                            "5. Cual es el atleta con mas medallas olimpicas?:",
                            "6. Cantidad de huesos que tiene un adulto?:",
                            "7. En que orden se situan los 8 planetas de mas cerca a mas lejos del sol?:",
                            "8. Cual es el nombre del supercontinente que al parecer existio hace 400 millones de anos?:",
                            "9. Dada la siguiente serie de numeros: 11235... , cual es el siguiente numero?:",
                            "10. Que elemento de la tabla periodica presenta mayor electronegatividad?:",
                            "11. A que animal deben su nombre las Islas Canarias?:",
                            "12. Cual es el album musical mas vendido de la historia?:",
                            "13. Quien ideo las leyes de la herencia genetica?",
                            "14. En la mitologia griega, quien mato a Aquiles?:",
                            "15. Gracias a qué ganó Albert Einstein el Premio Nobel?:"};

   char opciones3[][100] = {"A. Rusia", "B. Antartida", "C. Polo Norte", "D. Asia",
                            "A. Homero", "B. Becquer", "C. Gongora", "D. Quevedo",
                            "A. Amazonas", "B. Tajo", "C. Nilo", "D.Guadalquivir",
                            "A. Europa", "B. Asia", "C. America", "D. Oceania",
                            "A. Mark Spitz", "B. Jenny Thompson", "C. Larisa Latynina", "D. Michael Phelps",
                            "A. 198", "B. 565", "C. 300", "D. 206",
                            "A. Mercurio, Marte, Saturno, Venus, Tierra, Urano, Neptuno, Jupiter", "B. Venus, Tierra, Marte, Jupiter, Saturno, Neptuno, Urano, Mercurio", "C. Mercurio, Venus, Tierra, Marte, Jupiter, Saturno, Urano, Neptuno", "D. Tierra, Marte, Venus, Mercurio, Jupiter, Urano, Neptuno, Saturno",
                            "A. Gondwana ", "B. Euramerica ", "C. Laurasia ", "D. Pangea",
                            "A. 16", "B. 10", "C. 8", "D. 2",
                            "A. F (Fluor)", "B. Cs (Cesio)", "C. U (Uranio)", "D. Cl (Cloro)",
                            "A. Canario", "B. Perro", "C. Lagarto de Gran Canaria", "D. Caballo",
                            "A. Their Greatest Hits, Eagles.", "B. Thriller, de Michael Jackson.", "C. The Dark Side of the Moon, Pink Floyd", "D. Back in Black, AC/DC",
                            "A. Gregor Mendel.", "B. Georges Lemaitre.", "C. Charles Darwin", "D. Ninguna de las anteriores",
                            "A. Zeus.", "B. Hades.", "C. Paris", "D. Hefestos",
                            "A. Ley del efecto fotoelectrico.", "B. La teoría de la relatividad especial", "C. Teoría de campo unificado", "D. Movimiento Browniano"};

   char respuestas3[] = {'B', 'A', 'A','C','D','D','C','B','C', 'A', 'B', 'B','A','C','A'};
   int numerodepreguntas3 = sizeof(preguntas3)/sizeof(preguntas3[0]);

   char adivina;
   int puntuacion;

	///////// INICIO DEL PROGRAMA ///////// 

	system("color E");
	WelcomeScapeRoom();
	system("\n\n PAUSE");
	for (i=0; i<N; i++)  
	   introducir_datos_programa(user, N);
	system("color E");

	do
	{
		system("cls");
		Menu_Inicial(); //Muestra en pantalla la autentificacion de usuario
		scanf("%d",&opcion1);

		switch (opcion1)
		{
			case 1: //USUARIO YA REGISTRO0
				intentos = 3; //3 intentos para introducir datos
				es_usuario = 0;

				do
				{
					system("cls");
					exito = false;
					printf ("\n INTRODUZCA SUS DATOS: \n\n");
					fflush(stdin);
					printf(" -> Nombre de usuario: ");
					gets(leer_nombre);
					printf(" -> Contrase%ca: ",164);
					gets(leer_clave);
					fflush(stdin);
					printf("\n");

					for(i=0; i<N && es_usuario==0 && intentos!=0; i++)
					{
					   es_usuario = validar_usuario(leer_nombre, leer_clave, &user[i]);
				    }


					if(es_usuario == 1) //SI EL USUARIO INTRODUCIDO ES CORRECTO ACCEDEMOS AL PROGRAMA
					{


						//ESCRIBIR EL PROGRAMA
						InicioJuego();
						do
						{
					      system ("cls");
					      system("color 0");
						  PuertaEscape();
						  Hora();
				          printf ("\n\n                                   -- Bienvenido  a ESCAPE ROOM --\n\n Seleccione una opci%cn: \n",162);
				          printf ("\n 1. Dificultad Baja.");
				          printf ("\n 2. Dificultad Media.");
						  printf ("\n 3. Dificultad Alta");
				          printf ("\n 4. Volver al menu principal.");

	                      printf("\n   Opci%cn elegida: ",162);
					      scanf("%d",&opcion2);

						switch (opcion2)
						{
							case 1: //Dificultad baja
							
							   system ("cls");
							   fflush(stdin);
							   puntuacion=0;
							   printf("Has seleccionado jugar en dificultad baja\n");
							        for(int i = 0; i < numerodepreguntas1; i++)
                                    {
                                        printf("%s\n", preguntas1[i]);

                                        for(int j = (i * 4); j < (i * 4) + 4; j++)
                                        {
                                           printf("%s\n", opciones1[j]);
                                        }

                                           printf("adivina: ");
                                           scanf("%c", &adivina);
                                           scanf("%c");

                                           adivina = toupper(adivina);

                                        if(adivina == respuestas1[i])
                                        {
                                          printf("Respuesta Correcta!\n");
                                          printf("\n");
                                          puntuacion++;
                                        }
                                        else
                                        {
                                          printf("Respuesta Incorrecta!\n");
                                          printf("\n");
                                        }
                                     }

                                     printf("*********************\n");
                                     printf("Resultado final: %d/%d\n", puntuacion, numerodepreguntas1);
                                     printf("*********************\n");

                                    if(puntuacion>=5)
                                    {
                                    printf("Has aprobado, pasa al siguiente nivel de dificultad.\n");
                                    }
                                    else
                                    {
                                     printf("Has suspendido, repite el examen.\n");
                                    }
							        system ("pause");
							break;

							case 2: //Dificultad media
							   system ("cls");
							   fflush(stdin);
							   puntuacion=0;
							   printf("Has seleccionado jugar en dificultad media\n");
							         for(int i = 0; i < numerodepreguntas2; i++)
                                     {
                                        printf("%s\n", preguntas2[i]);

                                        for(int j = (i * 4); j < (i * 4) + 4; j++)
                                        {
                                           printf("%s\n", opciones2[j]);
                                        }

                                           printf("adivina: ");
                                           scanf("%c", &adivina);
                                           scanf("%c");

                                           adivina = toupper(adivina);

                                        if(adivina == respuestas2[i])
                                        {
                                          printf("Respuesta Correcta!\n");
                                          printf("\n");
                                          puntuacion++;
                                        }
                                        else
                                        {
                                          printf("Respuesta Incorrecta!\n");
                                          printf("\n");
                                        }
                                     }

                                     printf("*********************\n");
                                     printf("Resultado final: %d/%d\n", puntuacion, numerodepreguntas2);
                                     printf("*********************\n");

                                    if(puntuacion>=3)
                                    {
                                    printf("Has aprobado, pasa a la siguiente dificultad.\n");
                                    }
                                    else
                                    {
                                     printf("Has suspendido, repite el examen.\n");
                                    }
							        system ("pause");
							break;

							case 3: //Dificultad alta
							   system ("cls");
							   fflush(stdin);
							   puntuacion=0;
							   printf("Has seleccionado jugar en dificultad alta\n");
							         for(int i = 0; i < numerodepreguntas3; i++)
                                     {
                                        printf("%s\n", preguntas3[i]);

                                        for(int j = (i * 4); j < (i * 4) + 4; j++)
                                        {
                                           printf("%s\n", opciones3[j]);
                                        }

                                           printf("adivina: ");
                                           scanf("%c", &adivina);
                                           scanf("%c");

                                           adivina = toupper(adivina);

                                        if(adivina == respuestas3[i])
                                        {
                                          printf("Respuesta Correcta!\n");
                                          printf("\n");
                                          puntuacion++;
                                        }
                                        else
                                        {
                                          printf("Respuesta Incorrecta!\n");
                                          printf("\n");

                                        }
                                     }

                                     printf("*********************\n");
                                     printf("Resultado final: %d/%d\n", puntuacion, numerodepreguntas3);
                                     printf("*********************\n");

                                    if(puntuacion>10)
                                    {
                                    printf("Has aprobado, pasa a la siguiente dificultad.\n");
                                    }
                                    else
                                    {
                                     printf("Has suspendido, repite el examen.\n");
                                    }
							        system ("pause");
							break;

							case 4: //volver al menu inicial
							break;

						    } //switch opcion 2
						}while(opcion2 != 4);
		            //FINAL DEL PROGRAMA
					}
					else
					{
						printf("\n -> Nombre de usuario y%co contrase%ca incorrectos.", 47, 164);
						printf("\n -> Quedan %d intentos.\n -> ", --intentos);
						system ("pause");
						exito=true;
					}
				} while(intentos!=0 && opcion2 != 4 );

			break;


			case 2:  //REGISTRAR USUARIO
				exito=false;
				for(i = 0; i < N && exito == false; i++)
				{
					if(user[i].registrado == 0)
					{
						registrar_usuario(&user[i]);
						printf("\n -> Usuario registrado con exito.\n ->");
						exito=true;
						system ("pause");
					}
				}
				if (exito == false)
				{
				  printf("\n -> Acci%cn no valida. Se ha registrado el maximo numero de usuarios.\n ->",162);
				  system ("pause");
			    }

				break;

			case 3: //ELIMINAR USUARIO

				exito = false;
				printf("\n -> Introduzca la cuenta que desea eliminar: ");
				fflush(stdin);
				gets (leer_nombre);
				printf(" -> Introduzca contrase%ca: ",164);
				fflush(stdin);
				gets (leer_clave);
				fflush(stdin);

				for (i = 0, exito = false; i < N; i++)

				if (strcmp(user[i].username, leer_nombre) == 0 && strcmp(user[i].password, leer_clave) == 0 && user[i].registrado == true)
				    {
				    	strcpy(user[i].username, "admin");
				    	strcpy(user[i].password, "0000");
				    	user[i].registrado = 0;
				    	printf("\n -> Usuario eliminado.\n -> ");
				    	exito = true;
				    	system ("pause");
				    	break;
					}
				if (exito==false)
					{
						printf("\n -> Usuario no encontrado.\n -> ");
						exito = false;
						system("pause");
					}
			break;
		}//switch
	}while(opcion1 != 4);

    introducir_datos_fichero (user);

	printf(" Fin del programa.\n");

	printf("\n\n");
	system("pause");
	return 0;
}


void Menu_Inicial ()  //Menu de registro de usuario
{
	system ("cls");
	Hora();
    printf ("\n\n Bienvenido a SCAPE ROOM. Seleccione una opci%cn:\n ",162) ;
    printf ("\n  1) Usuario ya registrado.");
    printf ("\n  2) Registrar un nuevo usuario.");
    printf ("\n  3) Borrar usuario.");
    printf ("\n  4) Salir del programa.");
    printf ("\n\n Elija una opci%cn: ",162);
}

void Hora()
{
	time_t t;
	struct tm *tm;
	char fecha_dia[100];
	t = time(NULL);
	tm = localtime(&t);
	strftime(fecha_dia, 100, "%d/%m/%Y", tm);
	printf("\n Fecha actual: %s", fecha_dia);
}



