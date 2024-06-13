#include <stdio.h>
int main() {
    int n, soma = 0;

    printf("Insira o valor da ordem: ");
    scanf("%d", &n);

    int ma[n][n], v[n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite um valor: ");
            scanf("%d", &ma[i][j]);

            if (i == j) {
                soma += ma[i][j];
                v[i] = ma[i][j];
            }
        }
    }

    printf("Soma: %d", soma);

    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf(" %d)", v[i]);
        }else if (i == 0) {
            printf(" (%d + ", v[i]);
        }else {
            printf("%d +", v[i]);
        }
    }


}