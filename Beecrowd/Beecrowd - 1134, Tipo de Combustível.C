#include <stdio.h>
int main () {
    int opc, Al = 0, Gaso = 0, Diel = 0;

    while (opc != 4) {

    printf("Digite qual tipo de combustível usou: ");
    scanf("%d", &opc);
    
    switch (opc) {
        case 1:
        Al++;
        break;

        case 2:
        Gaso++;
        break;
        
        case 3:
        Diel++;
        break;

    }
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", Al);
    printf("Gasolina: %d\n", Gaso);
    printf("Diesel: %d\n", Diel);
}