#include <stdio.h>
int teste(float tempo) {
    int ver = 0;

    if (tempo >= 0.00 && tempo < 12.00) {
        ver = 1;
    }else if (tempo >= 12.00 && tempo < 19.00) {
        ver = 2;
    }else if(tempo >= 19.00 && tempo < 24.00) {
        ver = 3;
    }

    return(ver);
}


int main () {
    char nome[10];
    float hora;

    printf("Digite seu nome: ");
    fgets(nome, 10, stdin);
    
    printf("Digite o horario: ");
    scanf("%f", &hora);

    if (teste(hora) == 1) {
        printf("Bom dia, %s", nome);
    }else if (teste(hora) == 2) {
        printf("Boa tarde, %s", nome);
    }else if (teste(hora) == 3) {
        printf("Boa noite, %s", nome);

    }

    }