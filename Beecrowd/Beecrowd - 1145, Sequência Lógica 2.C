#include <stdio.h>
int main () {
    int a, b, i = 1, x = 1;
    printf("Respeitando que ambos sao positivos e o primeiro seja menor que 20");
    printf("\nDigite 2 valores: ");
    scanf("%d %d", &a, &b);

    while (i <= b) {
        printf("%d", i);

        for (x = 1; x < a && i + x <= b; x++) {
            printf(" %d", i + x);
        }
        printf("\n");
        i += a;
    }

    return 0;

}