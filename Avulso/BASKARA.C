#include <stdio.h>
#include <math.h>

int main() {
 double x, y, z, delta, r1, r2;
 printf("Insira 3 valores para serem usados na forma de Bhaskara: ");
 scanf("%lf %lf %lf", &x, &y, &z);
 delta = pow(y, 2) - 4 * x * z;
 
 if(delta >= -1 || x != 0){
     r1 = (-y + sqrt(delta)) / (2 * x);
     r2 = (-y - sqrt(delta)) / (2 * x);
     printf("R1 = %.5lf\nR2 = %.5lf", r1, r2);
 }else{
     printf("Impossivel Calcular");
 }
    return 0;
}