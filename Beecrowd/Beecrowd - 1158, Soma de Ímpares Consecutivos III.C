#include <stdio.h>

int main() {
    int num, x, y, soma;
    printf("Digite o numero de casos: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Digite dois valores: ");
        scanf("%d %d", &x, &y);

        soma = 0;

        if (x % 2 == 0) {
            x += 1;
        }

        for (int cont = 0; cont < y; cont++) {
            soma += x;
            x += 2;
        }

        printf("%d\n", soma);
    }

    return 0;
}