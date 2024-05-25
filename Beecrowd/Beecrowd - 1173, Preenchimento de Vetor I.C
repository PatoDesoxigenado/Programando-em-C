#include <stdio.h>
int main() {
    int V, valor[10];

    printf("Digite um valor: ");
    scanf("%d", &V);

    valor[0] = V;    

    printf("N[0] = %d\n", valor[0]);

    for (int x = 1; x < 10; x++) {
        valor[x] = valor[x - 1] * 2;
        printf("N[%d] = %d\n", x, valor[x]);
    }
}