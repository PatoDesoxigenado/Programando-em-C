#include <stdio.h>
 
int main() {
 int n, i = 0; 
 float a, b, c, M1;
 
 scanf("%d", &n);
 
 while (i < n) {
    scanf("%f %f %f", &a, &b, &c);

    M1 = (a * 2 + b * 3 + c * 5) / 10;

    printf("%.1f\n", M1);

    i++;
 }
    return 0;
}