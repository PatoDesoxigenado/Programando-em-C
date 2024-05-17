#include <stdio.h>
int main () {
    int x, i = 0, valor, M2 = 0, M3 = 0, M4 = 0, M5 = 0;

    printf("Digite um valor: ");
    scanf("%d", &x);

    while (i < x) {
        printf("Insira um Numero: ");
        scanf("%d", &valor);

        if (valor % 2 == 0)
        M2++;

        if (valor % 3 == 0)
        M3++;

        if (valor % 4 == 0)
        M4++;

        if (valor % 5 == 0)
        M5++;

        i++;
    }

    printf("%d Multiplo(s) de 2\n", M2);
    printf("%d Multiplo(s) de 3\n", M3);
    printf("%d Multiplo(s) de 4\n", M4);
    printf("%d Multiplo(s) de 5\n", M5);

    return 0;
}