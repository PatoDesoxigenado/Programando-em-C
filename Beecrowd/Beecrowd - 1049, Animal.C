#include <stdio.h>
#include <string.h>

int main() {
 char vert[15], tipo[15], come[15];

 gets(vert);

 if (strcmp(vert, "vertebrado") == 0) {
    gets(tipo);

    if (strcmp(tipo, "ave") == 0) {
      gets(come);

      if (strcmp(come, "carnivoro") == 0) {
         printf("aguia\n");
      }else if (strcmp(come, "onivoro") == 0) {
         printf("pomba\n");
      }
   }else if (strcmp(tipo, "mamifero") == 0) {
      gets(come);
    
      if (strcmp(come, "onivoro") == 0) {
         printf("homem\n");
      }else if (strcmp(come, "herbivoro") == 0) {
         printf("vaca\n");
      }
    }

 }else if (strcmp(vert, "invertebrado") == 0) {
   gets(tipo);

  if (strcmp(tipo, "inseto") == 0) {
   gets(come);

   if (strcmp(come, "hematofago") == 0) {
      printf("pulga\n");
   }else if (strcmp(come, "herbivoro") == 0) {
      printf("lagarta\n");
   }
  }else if (strcmp(tipo, "anelideo") == 0) {
   gets(come);

   if (strcmp(come, "hematofago") == 0) {
      printf("sanguessuga\n");
   }else if (strcmp(come, "onivoro") == 0) {
      printf("minhoca\n");
   }
  }
  
 }


    return 0;
}