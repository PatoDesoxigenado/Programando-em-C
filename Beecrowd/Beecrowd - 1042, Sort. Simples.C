#include <stdio.h>
 
int main() {
 int valor [3], x;
 
 for (int i = 0; i < 3; i++) {
     printf("Digite um valor: ");
     scanf("%d", &valor[i]);
 }
 do {
 x = 2;

 if (valor[x] > valor[x-1] && valor[x-1] > valor[x-2]) {
    printf("%d\n %d\n%d\n", valor[x-2], valor[x-1], valor[x]);
    break;
 }else if (valor[x] > valor[x-1] && valor[x-2] > valor[x-1]) {
    printf("%d\n %d\n%d\n", valor[x-1], valor[x-2], valor[x]);
    break;
 }

 if (valor[x-1] > valor[x] && valor[x] > valor[x-2]) {
    printf("%d\n %d\n%d\n", valor[x-2], valor[x], valor[x-1]);
    break;
 }else if (valor[x-1] > valor[x] && valor[x-2] > valor[x]) {
    printf("%d\n %d\n%d\n", valor[x], valor[x-2], valor[x-1]);
    break;
 }

 if (valor[x-2] > valor[x] && valor[x] > valor[x-1]) {
    printf("%d\n %d\n%d\n", valor[x-1], valor[x], valor[x-2]); 
    break;
 }else if (valor[x-2] > valor[x] && valor[x-1] > valor[x]) {
    printf("%d\n %d\n%d\n", valor[x], valor[x-1], valor[x-2]);
    break;
 }
 x--;

}while(x >=0);

printf("\n");

 for (int y = 0; y < 3; y++) {
    printf("%d\n", valor[y]);
 }

    return 0;
}