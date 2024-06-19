#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[20];
    int matricula;
    char curso[20];
    int nota[3];
    float media;
}aluno;

int main () {

    aluno alunos[5];
    int notamin = 11, notamax = -1, ind;

    for (int i = 0; i < 5; i++) {
            printf("Digite o nome do Aluno %d: ", i + 1);
            scanf("%s", alunos[i].nome);

            printf("Digite a matrícula: ");
            scanf("%d", &alunos[i].matricula);

            printf("Digite qual o curso: ");
            scanf("%s", alunos[i].curso);
            
            for (int j = 0; j < 3; j++) {
            printf("Digite a nota: ");
            scanf("%d", &alunos[i].nota[j]);
            }
            alunos[i].media = (alunos[i].nota[0] + alunos[i].nota[1] + alunos[i].nota[2])/3;
            system("cls");
    }
    
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("Aluno: %s\n", alunos[i].nome);
        printf("Matricula do Aluno: %d\n", alunos[i].matricula);
        printf("Curso do Aluno: %s\n", alunos[i].curso);
        printf("Notas: \n");
        for (int j = 0; j < 3; j++) {
            printf("%d\n", alunos[i].nota[j]);
        }
        printf("Media do Aluno: %.2f\n", alunos[i].media);
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        if (alunos[i].nota[0] > notamax) {
            notamax = alunos[i].nota[0];
            ind = i;
        }
    }
    printf("Aluno com maior nota na primeira prova: %s\n", alunos[ind].nome);

    notamax = -1;

    for (int i = 0; i < 5; i++) {
        if (alunos[i].media > notamax) {
            notamax = alunos[i].media;
            ind = i;
        } 
    }

    printf("Aluno com a maior media geral: %s\n", alunos[ind].nome);

    for (int i = 0; i < 5; i++) {
        if (alunos[i].media < notamin) {
            notamin = alunos[i].media;
            ind = i;
        }
    }

    printf("Aluno com a menor media geral: %s\n", alunos[ind].nome);
    }