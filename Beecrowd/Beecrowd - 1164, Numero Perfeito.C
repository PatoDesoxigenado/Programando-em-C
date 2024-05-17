#include <stdio.h>
int main() {
    int x, num, i = 0, j, soma;

    printf("Digite um valor: ");
    scanf("%d", &x);

    while (i < x) {
        printf("Digite um numero: ");
        scanf("%d", &num);
 
        j = 1;
        soma = 0;

        while (j < num){
            if (num % j == 0){
                soma += j;
            }
            j++;
        }

        if (soma == num) {
            printf("%d eh perfeito\n", num);
        }else {
            printf("%d nao eh perfeito\n", num);
        }
        
        i++;
    }
    return 0;
}