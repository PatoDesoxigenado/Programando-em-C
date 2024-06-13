#include <stdio.h>
int main () {
    char palavra[20], op, op2;

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    printf("\nCaractere a ser substituido: ");
    scanf(" %c", &op);

    printf("\nCaractere que ira substituir ele: ");
    scanf(" %c", &op2);
    
    for (int i = 0; palavra[i] != '\0'; i++) { //Lembrar que a condição é "ENQUANTO", então dizer que palavra[i] == 0 faz o código entender que o primeiro indice necessariamente precisa ser '\0', e quando for diferente disso ele para
        if (palavra[i] == op) {
            palavra[i] = op2;
    }

    }
    printf("Palavra transformada: %s\n", palavra);
}