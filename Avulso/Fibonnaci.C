#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int n, t1 = 0, t2 = 1, proximoTermo;

    printf("Informe a quantidade de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Informe um número maior ou igual a 1.\n");
    } else if (n == 1) {
        printf("Sequência de Fibonacci: %d\n", t1);
    } else {
        printf("Sequência de Fibonacci: %d, %d", t1, t2);
        for (int i = 3; i <= n; ++i) {
            proximoTermo = t1 + t2;
            printf(", %d", proximoTermo);
            t1 = t2;
            t2 = proximoTermo;
        }
        printf("\n");
    }

    return 0;
}
