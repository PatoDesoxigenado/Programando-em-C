#include <stdio.h>
int main() {
    float x = 1, i = 0, sim = 0;

    while (x > 0) {
        printf("Digite um valor: ");
        scanf("%f", &x);

        if (x < 0)
        break;

        sim += x;

        i++;
    }
    
    printf("Media: %.2f", sim / i);
}