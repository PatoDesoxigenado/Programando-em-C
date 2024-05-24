#include <stdio.h>
#include <string.h>

int main () {
    char nome[100], nome2[50];
    int cont = 0, aux = 0;

    printf("\n");

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);

    printf("\n");

    for (int i = 0; i < 100; i++) {

        if ((nome[i] != 32) && (nome[i] != 10)) { //32 e 10 são, respectivamente, espaço (' ') e \0 na tabela ASCII
            nome2[aux] = nome[i];
            aux++;
            cont++;
        }else {
            nome2[aux] = '\0';

            printf("%s\n", nome2);
            printf("Quantidade de letras: %d\n\n", cont);

            aux = 0;
            cont = 0;
        }
    }

    return 0;
}