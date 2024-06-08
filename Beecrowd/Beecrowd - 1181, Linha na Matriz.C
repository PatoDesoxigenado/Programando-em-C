#include <stdio.h>
 
int main() {
 int L;
 float soma = 0, M[12][12];
 char op;
 
 printf("Digite em qual linha deseja digitar? ");
 scanf("%d", &L);
 
 getchar();

 printf("Qual operação deseja fazer?\nS - Soma\nM - Media\n");
 scanf("%c", &op);

for (int i = 0; i < 12; i++) {
    for (int j = 0; j< 12; j++) {
        printf("Digite um valor: ");
        scanf("%f", &M[i][j]);
        if (i == L) {
        soma += M[i][j];
        }
        }
        }
        
 switch (op) {
    case 'S':
        printf("%.1f\n", soma);
        break;

    case 'M': 
        printf("%.1f\n", soma/12);
        break;
 }

 return 0;
}