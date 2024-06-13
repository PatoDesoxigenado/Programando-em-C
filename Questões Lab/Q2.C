#include <stdio.h>
int main () {
    int n, m;

    printf("Digite o valor da linha e coluna, respectivamente: ");
    scanf("%d %d", &n, &m);

    int ma[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Digite um valor: ");
            scanf("%d", &ma[i][j]);
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", ma[i][j]);
        }
        printf("\n");
    }
}