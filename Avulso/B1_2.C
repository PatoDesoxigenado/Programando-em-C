#include <stdio.h>
#include <stdlib.h>

int valor(int A, int B) {
    return (A + B + abs(A - B))/2;
}

int main () {
    int A, B, C, Miyo;
    printf("Digite tres valores: ");
    scanf("%d %d %d", &A, &B, &C);

    Miyo = valor(A, valor (B, C));

    printf("%d eh o maior\n", Miyo);

    return 0;
}