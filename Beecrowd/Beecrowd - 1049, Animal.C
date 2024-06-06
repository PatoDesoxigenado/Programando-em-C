#include <stdio.h>
#include <string.h>

int main() {
 char vert[11], vert2[11] = "Vertebrado", tipo[10], tipo2[10] = "Mamifero", come[12];
 int x;

 printf("Digite qual subfilio o animal que voce procura se encaixa: \n\nVertebrado\nou\nInvertebrado\n");
 fgets(vert, 11, stdin);

x = strcmp(vert, vert2);

 if (x == 0) {
    printf("É mamifero ou ave? ");
    fgets(tipo, 10, stdin);
 }

 if (strcmp(tipo, tipo2) == 0) {
    printf("Pato");
 }
    return 0;
}