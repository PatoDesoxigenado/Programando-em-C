#include <stdio.h>
int main() {
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    int ma[n][n], teste = 1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            printf("Digite um valor: ");
            scanf("%d", &ma[i][j]);
        }
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (ma[i][j] != ma[j][i]) {
                teste = 0;
            }
        }
    }

    if (teste) {
        printf("A matriz eh simetrica!\n");
    }else {
        printf("A matriz nao eh simetrica!\n");
    }
}