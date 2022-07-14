#include <stdio.h>
#include <stdlib.h>


void WelcomeScapeRoom()
{
	FILE  *fd1;

	int c;
	fd1 = fopen("WelcomeScapeRoom.txt", "r"); 

	if (fd1 == NULL)
	  printf("\n Archivo no encontrado.");

    while((c = getc(fd1)) != EOF)
	{
	 	if (c == '\n')
	 	   printf("\n");
	 	else if (c == '\0')
	 	   printf("\0");
	 	else
	 	   putchar(c);
	}
}

void PuertaEscape()
{
	FILE  *fd2;
	int c;
	fd2 = fopen("PuertaEscape.txt", "r");

	if (fd2 == NULL)
	  printf("\nNo se pudo encontrar el archivo.");

	 while((c = getc(fd2)) != EOF)
	{
	 	if (c == '\n')
	 	  printf("\n");

	 	else if (c == '\0')
	 	  printf("\0");

	 	else
	 	  putchar(c);
	}
}

void InicioJuego()
{
	FILE  *fd3;

	int c;

	system ("cls");
	system ("color E");

	fd3 = fopen("InicioJuego.txt", "r");

	if (fd3 == NULL)
	  printf("\nEl fichero no pudo ser abierto.");

	while ((c = getc(fd3)) != EOF)
	{
		if (c == '\n')
		  printf("\n");

		else if( c== '\0')
		  printf("\0");

		else
		  putchar(c);
	}

	printf("\n\n");
	system ("pause");
}
