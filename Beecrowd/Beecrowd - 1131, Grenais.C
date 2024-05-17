#include <stdio.h>
int main() {
    int gol1, gol2, opc = 1, Grenai = 0, GrenaiInter = 0, GrenaiGremio = 0, Empates = 0;

    while (opc == 1){
        printf("Digite o numero de gols feitos por Inter e Gremio em um Grenal: ");
        scanf("%d %d", &gol1, &gol2);
        
        if (gol1 > gol2) 
            GrenaiInter++;
        
        if (gol2 > gol1)
            GrenaiGremio++;

        if (gol1 == gol2)
            Empates++;
        
        Grenai++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opc);
        
        if (opc == 1){
            continue;
        }else {
            printf("%d grenais\n", Grenai);
            printf("Inter: %d\n",   GrenaiInter);
            printf("Gremio: %d\n", GrenaiGremio);
            printf("Empates: %d\n", Empates);
    
            if (GrenaiInter > GrenaiGremio) {
            printf("Inter venceu mais\n");
            }else if (GrenaiGremio > GrenaiInter) {
            printf("Gremio venceu mais\n");
            }
            break;
        }
    }
    return 0;
}