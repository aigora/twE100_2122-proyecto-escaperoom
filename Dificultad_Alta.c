#include <stdio.h>

int main()
{
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
   int puntuacion=0;

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
         puntuacion=puntuacion-1;
      }
   }
   printf("************************\n");
   printf("Resultado final: %d/%d\n", puntuacion, numerodepreguntas3);
   printf("************************\n");

    if(puntuacion>=7)
    {
    printf("Has aprobado, pasa a la siguiente dificultad.\n");

    }
    else
    {
        printf("Has suspendido, repite el examen.\n");
    }

    return 0;
}
