#include <stdio.h>

int main()
{
   char preguntas[][100] = {"1. Cuando se aprobo la primera Constitucion Espanola?: ",
                            "2. Quien escribio poeta en Nueva York?:",
                            "3. Cual es la capital de Letonia?:",
                            "4. que es un polinomio?:",
                            "5. Cuando se crearon los juegos olimpicos?:"};

   char opciones[][100] = {"A. 1526", "B. 1812", "C. 1932", "D. 1978",
                          "A. Lorca", "B. Becquer", "Gongora", "D. Quevedo",
                          "A. Estonia", "B. Tallin", "C. Riga", "D. Palermo",
                          "A. una ecuacion", "B. un conjunto de monomios", "C. una ecuacion racional", "D. una ecuacion irracional",
                          "A. 1930", "B. 1896", "C. 1755", "D. 1495"};

   char respuestas[] = {'B', 'A', 'C','D','B'};
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
