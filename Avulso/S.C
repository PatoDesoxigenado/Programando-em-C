#include <stdio.h>
#include <math.h>

int main (){
    double x1, x2, y1, y2;
    printf("Digite Valor: ");
    scanf("%lf %lf", &x1, &x2);

    y1 = pow(x1, x2);

    printf("Aqui jaz o seu valor: %lf ", y1);

}