#include <stdio.h>

int Horas(int S) {
    return S / 3600;
}

int Minutos(int S) {
    return (S % 3600) / 60;
}

int Segundos(int S) {
    return S % 60;
}
 
int main() {
 int A;
 printf("Digite um valor: ");
 scanf("%d", &A);
 
 printf("%d:%d:%d\n", Horas(A), Minutos(A), Segundos(A));
    return 0;
}