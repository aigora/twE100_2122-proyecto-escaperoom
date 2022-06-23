#include <stdio.h>
#include <stdlib.h>

FILE  *fd;

void WelcomeScapeRoom()
{
	int c;
	fd = fopen("WelcomeScapeRoom.txt", "r"); 

	if (fd == NULL)
	  printf("\n Archivo no encontrado.");

    while((c = getc(fd)) != EOF)
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
	int c;
	fd = fopen("PuertaEscape.txt", "r");

	if (fd == NULL)
	  printf("\nNo se pudo encontrar el archivo.");

	 while((c = getc(fd)) != EOF)
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
	int c;

	system ("cls");
	system ("color E");

	fd = fopen("InicioJuego.txt", "r");

	if (fd == NULL)
	  printf("\nEl fichero no pudo ser abierto.");

	while ((c = getc(fd)) != EOF)
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
