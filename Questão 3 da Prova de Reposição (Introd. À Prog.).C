#include <stdio.h>
#include <math.h>
int main () {
    char op, op2;
    float x, y, potencia, raiz, raiz2, resto;

    printf("Digite dois valores: ");
    scanf("%f %f", &x, &y);

    printf("\nQual operacao vai querer fazer?\nP - Potencia, R - Raiz, D - Resto da Divisao\n"); getchar();
    scanf("%c", &op);

    potencia = pow(x, y);
    raiz = sqrt(x);
    raiz2 = sqrt(y);
    resto = x / y;

    switch (op) {
        case 'P':
        printf("Potencia: %.f\n", potencia);
        break;

        case 'R':
            printf("\nRaiz do primeiro ou segundo numero?\nF - Primeiro, S - Segundo\n"); getchar ();
            scanf("%c", &op2);

        if (op2 == 'F') {
            printf("Raiz de %.f: %.f", x, raiz);
            break;
        }else if (op2 == 'S') {
            printf("Raiz de %.f: %.f", y, raiz2);
            break;
        }

        case 'D':
            printf("Resto da Divisao: %.f", resto);
            break;
        
    }

    return 0;

}