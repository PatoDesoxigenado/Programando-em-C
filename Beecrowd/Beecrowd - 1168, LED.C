#include <stdio.h>
#include <string.h>

int main() {
    int N, i, j, cont=0;
    char numero[10];
    //printf("Digite um numero: \n");
    scanf("%d", &N);
    getchar();
    for (i=0; i<N; i++){
        fgets(numero, 10, stdin);
        for (j=0; j < 10 ; j++){
            switch(numero[j]){
                case '1':
                    cont+=2;
                    break;
                case '2':
                    cont+=5;
                    break;
                case '3':
                    cont+=5;
                    break;
                case '4':
                    cont+=4;
                    break;
                case '5':
                    cont+=5;
                    break;
                case '6':
                    cont+=6;
                    break;
                case '7':
                    cont+=3;
                    break;
                case '8':
                    cont+=7;
                    break;
                case '9':
                    cont+=6;
                    break;
                case '0':
                    cont+=6;
                    break;
            }
        }
        printf("%d leds\n", cont);
        cont=0;
    }
 return 0;
}