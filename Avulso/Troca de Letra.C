#include <stdio.h>

int main (){
    char string[20], letra1, letra2;

    printf("Digite uma palavra:\n");
    gets(string);

    printf("Escolha uma letra que deseja mudar: \n");
    scanf("%c", &letra1);

    printf("Escolha uma letra que ira substituir:\n");
    scanf(" %c", &letra2);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == letra1) {
            string[i] = letra2;
        }
    }

    printf("%s", string);
    return 0;

}