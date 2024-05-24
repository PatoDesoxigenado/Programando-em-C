#include <stdio.h>

int main() {
    int x = 1, soma;

    while (x != 0) {
        printf("Digite um valor: ");
        scanf("%d", &x);

        if (x == 0) {
            break;
        }

        if (x % 2 != 0) {
            x += 1;
        }

        soma = 0;

        for (int i = 0; i < 5; i++) {
            soma += x;
            x += 2;
        }

        printf("Soma dos valores pares: %d\n", soma);
    }

    return 0;
}