#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 20  
#define N 5  

struct RegistroUsuario
{
	bool registrado;
	char username[M];
	char password[M];
};

typedef struct RegistroUsuario usuario;

void registrar_usuario(usuario *u)
{
	printf("\n -Introduzca nombre de usuario: ");
	fflush(stdin);
	gets(u->username);
	printf("\n\n -Introduzca una contrase%ca: ",164);
	gets(u->password);
	u->registrado=true;
}


int validar_usuario(char nombre[],char clave[],usuario *u)
{
	if((strcmp(nombre,u->username) == 0) && (strcmp(clave,u->password) == 0))
	    return 1;
	else
    	return 0;
}


void introducir_datos_programa (usuario u[],int dim)
{
	int i;
	char nombre[M];
	char clave[M];
	int reg;

	FILE *entrada = fopen("DATOS_DE_USUARIO.txt","r");

	if(entrada == NULL)
		printf("\n No se pudo abrir el fichero.\n");
	else
	{
		while(!feof(entrada))
		{
			for(i=0; i<dim; i++)
			{
				fscanf(entrada, "%d %s %s\n", &reg, nombre, clave);

				if(reg==1)
				{
					u[i].registrado = reg;
					strcpy(u[i].username, nombre);
					strcpy(u[i].password, clave);
				}
				else
				{
					u[i].registrado = 0;
					strcpy(u[i].username, "admin");
					strcpy(u[i].password, "0000");
				}
			}
		}
	}
	fclose(entrada);
}


void introducir_datos_fichero (usuario u[])
{
	int i;

	FILE *salida=fopen("DATOS_DE_USUARIO2.txt", "w");

	if(salida == NULL)
		printf("\nEl fichero no pudo ser abierto.\n");
	else
	{
		for(i=0; i<N; i++)
		{
			if (u[i].registrado == true)
				fprintf(salida, "%d %s %s\n", u[i].registrado, u[i].username, u[i].password);

			if (u[i].registrado == false)
				fprintf(salida, "%d ----- -----\n", u[i].registrado);
		}
	}
    	fclose(salida);
}
