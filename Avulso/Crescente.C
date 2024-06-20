#include <stdio.h>
int main () {
    int vetor[10], vetor2[10], vetor3[10], cont = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (vetor[i] > vetor[j])
                cont++; 
        }

        vetor2[cont] = vetor[i];
        cont = 0;
    }

    for (int i = 0; i < 10; i++) {
        printf("Valor %d: %d\n", i + 1, vetor2[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (vetor[i] < vetor[j])
                cont++; 
        }

        vetor3[cont] = vetor[i];
        cont = 0;
    }

    for (int i = 0; i < 10; i++) {
        printf("Valor %d: %d\n", i + 1, vetor3[i]);
    }
}