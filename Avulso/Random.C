#include <stdio.h>

int euclides(int a, int b){
    if(b == 0)
return a;
    else
     	return euclides(b, a % b);
}

int main() {
 int a = 56, b = 42, c = 14;

 if (c % euclides(a, b) == 0) {
    printf("A equacao eh Diofantina!");
 }else {
    printf("A equacao nao eh Diofantina!");
 }

}