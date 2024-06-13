#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    char palavra[10];
    int cont = 0;

    printf("Digite uma palavra: \n(Máximo de 10 caracteres)\n");
    fgets(palavra, 10, stdin);

    for (int i = 0; i < 10; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            cont ++;
        }
    }

    printf("Quantidade de vogais: %d\n", cont);
}