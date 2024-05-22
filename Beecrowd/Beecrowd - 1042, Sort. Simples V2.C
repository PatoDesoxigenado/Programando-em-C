#include <stdio.h>

int main() {
    int valor[3], temp = 0;
  
    for (int i = 0; i < 3; i++) {
        scanf("%d", &valor[i]);
    }
    
    int a = valor[0], b = valor[1], c = valor[2];

    if (a > b)
      temp = a; a = b; b = temp; 
    if (a > c) 
      temp = a; a = c; c = temp;
    if (b > c)
      temp = b; b = c; c = temp;
    
    printf("%d\n%d\n%d\n", a, b, c);

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%d\n", valor[i]);
    }

    return 0;
}