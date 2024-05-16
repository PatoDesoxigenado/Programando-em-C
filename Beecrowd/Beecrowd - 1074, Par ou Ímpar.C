#include <stdio.h>
 
int main() {
 
    int n , valor, i = 0;
    scanf("%d",&n);
    while(i < n){
        scanf("%d",&valor);
         if(valor > 0 && valor % 2 == 0) 
         printf("EVEN POSITIVE\n");

         if(valor < 0 && valor % 2 == 0) 
         printf("EVEN NEGATIVE\n");

         if(valor == 0) 
         printf("NULL\n");

         if(valor > 0 && valor % 2 != 0) 
         printf("ODD POSITIVE\n");

         if(valor < 0 && valor % 2 != 0) 
         printf("ODD NEGATIVE\n");

        i++;
    }
    
    
    return 0;
}