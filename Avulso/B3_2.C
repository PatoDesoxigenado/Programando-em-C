#include <stdio.h>
#include <math.h>

int main (){
    double x1, x2, y1, y2, Distancia;
    printf("Digite 2 valores: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Mais 2, por favor meu rei: ");
    scanf("%lf %lf", &x2, &y2);

    Distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("%.4lf", Distancia);

    return 0;
}