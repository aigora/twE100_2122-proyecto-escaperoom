#include <stdio.h>

int main()
{
   char preguntas[][100] = {"1. Cual es el lugar mas frio de la tierra?: ",
                            "2. Quien escribio La Odisea?:",
                            "3. Cual es el rio mas largo del mundo?:",
                            "4. En que continente esta equador?:",
                            "5. Cantidad de huesos que tiene un adulto?:"};

   char opciones[][100] = {"A. Rusia", "B. Antartida", "C. Polo Norte", "D. Asia",
                          "A. Homero", "B. Becquer", "Gongora", "D. Quevedo",
                          "A. Amazonas", "B. Tajo", "C. Nilo", "Guadarquibir",
                          "A. Europa", "B. Asia", "C. America", "D. Oceania",
                          "A. 198", "B. 565", "C. 300", "D. 206"};

   char respuestas[] = {'B', 'A', 'A','C','D'};
   int numerodepreguntas = sizeof(preguntas)/sizeof(preguntas[0]);

   char adivina;
   int puntuacion;

   for(int i = 0; i < numerodepreguntas; i++)
   {

        printf("%s\n", preguntas[i]);


      for(int j = (i * 4); j < (i * 4) + 4; j++)
      {
         printf("%s\n", opciones[j]);
      }

      printf("adivina: ");
      scanf("%c", &adivina);
      scanf("%c");

      adivina = toupper(adivina);

      if(adivina == respuestas[i])
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
   printf("*******\n");
   printf("Resultado final: %d/%d\n", puntuacion, numerodepreguntas);
   printf("*******\n");

    if(puntuacion>=3)
{
    printf("Has aprobado, pasa a la siguiente dificultad.\n");

}
    else
    {
        printf("Has suspendido, repite el examen.\n");
    }

    return 0;
}
