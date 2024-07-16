#include <stdio.h>
#define TAM 3

typedef struct Funcionario {
    char nome[30];
    int idade;
    char cpf[11];
    char cargo[30];
    float salario;
    int dia; char mes[10]; int ano;
    int codigosetor;
}func;

int main () {
    func funcionarios[TAM];

    for (int i = 0; i < TAM; i++){
        printf("Digite o nome do funcionario: ");
        fgets(funcionarios[i].nome, 30, stdin);

        printf("Digite a idade dele: ");
        scanf("%d", &funcionarios[i].idade);

        printf("Digite o CPF dele: "); getchar();
        fgets(funcionarios[i].cpf, 11, stdin);

        printf("Digite o cargo dele: "); getchar();
        fgets(funcionarios[i].cargo, 30, stdin);

        printf("Digite seu salario: ");
        scanf("%f", &funcionarios[i].salario);

        printf("Digite dia, mês e ano respectivamente (com enter a cada entrada)");
        scanf("%d %s %d", &funcionarios[i].dia, &funcionarios[i].mes, &funcionarios[i].ano);

        printf("Digite o codigo do setor: ");
        scanf("%d", &funcionarios[i].codigosetor);
        getchar();
    }

    for (int i =  0; i < TAM; i++) {
        printf("Funcionario %d", i + 1);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Idade: %d\n", funcionarios[i].idade);
        printf("Cpf: %s\n", funcionarios[i].cpf);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Salario: %.2f\n", funcionarios[i].salario);
        printf("Data de Nascimento: %d %s %d\n", funcionarios[i].dia, funcionarios[i].mes, funcionarios[i].ano);
        printf("Codigo do Setor: %d\n",funcionarios[i].codigosetor);
        printf("\n\n");
    }
}