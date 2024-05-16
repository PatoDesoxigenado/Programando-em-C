#include <stdio.h>
 
int main() {
 int a, b;
 
 while (a != b) {
     scanf("%d %d", &a, &b);
     
     if (a > b)
     printf("Decrescente\n");
     
     if (b > a)
     printf("Crescente\n");
 }
    return 0;
}