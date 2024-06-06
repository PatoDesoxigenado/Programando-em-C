#include <stdio.h>

int main() {
 char nome[10];
 float sal, vendas, total;
 
 printf("Digite seu nome: \n");
 fgets(nome, 10, stdin);
 
 printf("Digite seu salario: ");
 scanf("%f", &sal);
 
 printf("Digite quantas vendas efetuou esse mes (expresso em dinheiro): ");
 scanf("%f", &vendas);
 
 total = sal + (vendas * 0.15);
 
 printf("TOTAL = %.2f", total);

    return 0;
}