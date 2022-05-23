#include <stdio.h>

int main()
{
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

   char adivina;
   int puntuacion;

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
         puntuacion=puntuacion-1;
      }
   }
   printf("*********************\n");
   printf("Resultado final: %d/%d\n", puntuacion, numerodepreguntas1);
   printf("*********************\n");

    if(puntuacion>=5)
{
    printf("Has aprobado, pasa a la siguiente dificultad.\n");

}
    else
    {
        printf("Has suspendido, repite el examen.\n");
    }

    return 0;
}
