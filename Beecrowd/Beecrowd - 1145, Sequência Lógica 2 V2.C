#include <stdio.h>
int main () {
    int a, b, i = 1, x = 0;
    printf("Respeitando que ambos sao positivos e o primeiro seja menor que 20");
    printf("\nDigite 2 valores: ");
    scanf("%d %d", &a, &b);

    for (i; i <= b; i++) {
        x++;
        if (x == a){
        printf("%d\n", i);
        x = 0;
        }else {
            printf("%d ", i);
        }
    }

    return 0;

}