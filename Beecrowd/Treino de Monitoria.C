#include <stdio.h>
int main () {
    float valor;
    int forma;

    printf("Insira o valor: ");
    scanf("%f", &valor);

    printf("Insira a forma de pagamento: ");
    scanf("%d", &forma);

    switch (forma) {
        case 1:
        printf("O valor a ser pago no final e: %.f\n", valor * 1.1);
        break;

        case 2:
        printf("O valor a ser pago no final e: %.f\n", valor * 1.5);
        break;

        case 3:
        printf("O valor a ser pago no final e: %.f\n", valor * 2.0);
        break;
        
        default:
        printf("Erro!");
    }

    return 0;

}