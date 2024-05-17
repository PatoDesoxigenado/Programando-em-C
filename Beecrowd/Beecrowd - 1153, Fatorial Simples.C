#include <stdio.h>
int main() {
    int x, i = 1, coiso = 0, sim = 1, ata;

    printf("Digite um valor: ");
    scanf("%d", &x);

    while (i <= x) {
        if (x - i == 0)
            break;
        
        coiso = (x - i);
        ata = coiso;
        sim = sim * ata;

        i++;
    }

    printf("Fatorial: %d", x * sim);
    return 0;
}