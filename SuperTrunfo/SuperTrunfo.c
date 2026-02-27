#include <stdio.h>

int main (){
   char estado;
   char codigodacarta[50];
   char nomedacidade[50];
   int populacao;
   float area;
   float PIB;
   int pontosturisticos;


 printf("estado:   ");
 scanf(" %c", &estado);

printf("Codigo Da Carta:  ");
scanf(" %s", codigodacarta);  

printf("Nome Da Cidade:  ");
scanf(" %s", nomedacidade);

printf("População:  ");
scanf(" %i", &populacao);

printf("Area:  ");
scanf(" %f",  &area);

printf("PIB:  ");
scanf(" %f",  &PIB);

printf("Pontos Turisticos:  ");
scanf(" %i", &pontosturisticos);






   char estado2;
   char codigodacarta2[50];
   char nomedacidade2[50];
   int populacao2;
   float area2;
   float PIB2;
   int pontosturisticos2;







printf("estado:   ");
 scanf(" %c", &estado2);

printf("Codigo Da Carta:  ");
scanf(" %s", codigodacarta2);  

printf("Nome Da Cidade:  ");
scanf(" %s", nomedacidade2);

printf("População:  ");
scanf(" %i", &populacao2);

printf("Area:  ");
scanf(" %f",  &area2);

printf("PIB:  ");
scanf(" %f",  &PIB2);

printf("Pontos Turisticos:  ");
scanf(" %i", &pontosturisticos2);





printf("\n--- CARTA 1 ---\n ");

printf("Estado: %c\n", estado);

printf("Codigo Da Carta: %s\n", codigodacarta);

printf("Nome Da Cidade: %s\n", nomedacidade);

printf("População: %i\n", populacao);

printf("Area: %.2f\n", area);

printf("PIB: %.2f\n", PIB);

printf("Pontos Turisticos: %i\n", pontosturisticos);



printf("\n--- CARTA 2 ---\n");

printf("Estado: %c\n", estado2);

printf("Codigo Da Carta: %s\n", codigodacarta2);

printf("Nome Da Cidade: %s\n", nomedacidade2);

printf("População: %i\n", populacao2);

printf("Area: %.2f\n", area2);

printf("PIB: %.2f\n", PIB2);

printf("Pontos Turisticos: %i\n", pontosturisticos2);

return 0;

}