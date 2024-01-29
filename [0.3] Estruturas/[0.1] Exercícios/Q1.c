#include <stdio.h>
#include <stdlib.h>
/*
1. Crie um tipo estruturado para armazenar dados de um funcionário. Uma estrutura deste tipo possui
os seguintes campos: nome, salário, identificador e cargo.
a) Escreva uma função que receba como parãmetro o endereço de uma estrutura do tipo Funcionario
e preencha seus campos com valores fornecidos pelo usuário via teclado. Função Preencher
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario
e imprima os valores dos seus campos. Frunção Imprimir
c) Implemente uma função para realizar uma alteraçãao no salário de uma estrutura do tipo Funcionario. Função Refazer
d) Escreva uma função que receba como parâmetro um vetor de estruturas do tipo Funcionario e
imprima o cargo e salário do Funcionario com maior salário e o cargo e salário do funcionário
com o menor salário
*/

typedef struct funcionario{
   char nome[50];
   float salario;
   char identificador[20];
   char cargo[50];
}Funcionario;

//A
void preencher (Funcionario *F){
    printf ("Digite o nome do funcionario:\n");
    scanf (" %[^\n]", F->nome);
    printf("Digite o identificador:\n");
    scanf (" %[^\n]", F->identificador);
    printf("Digite o cargo:\n");
    scanf (" %[^\n]", F->cargo);
    printf("Digite o Salario:\n");
    scanf("%f", &F->salario);
}
//B
void imprimir (Funcionario *F){
    printf("Nome: %s\nIdentificador: %s\nCargo: %s\nSalario: %.2f\n", F->nome, F->identificador, F->cargo, F->salario);
}
//C
void altera_salario (Funcionario *F, float novo_salario){
    F->salario = novo_salario;
}
//D
void maior_menor_salario (int n, Funcionario *v){
    Funcionario maior = v[0];
    Funcionario menor = v[0];

    for (int i = 1; i < n; i++){
        if (v[i].salario>maior.salario){
            maior = v[i];
        }
        if (v[i].salario<menor.salario){
            menor = v[i];
        }
    }
    printf("Funcionario com Maior Salario\n");
    imprimir(&maior);
    printf("Funcionario com Menor Salario\n");
    imprimir(&menor);
    
}



int main (void){
int f,i;
printf ("Digite quantos funcionarios tem na impresa:\n");
scanf("%d", &f);
Funcionario funcionarios[f];


//Preenchimento
for (i=0; i<f; i++){
    printf("\nFuncionario %d\n", i+1);
    preencher(&funcionarios[i]);
}
//Impressão
for (i=0;i<f;i++){
    printf("\nFuncionario %d\n", i+1);
    imprimir(&funcionarios[i]);
}

int indicador;
float novo_salario;
printf("\nDigite o numero do funcionario que deseja alterar o valor do salario:\n");
scanf("%d",&indicador);
indicador -= 1; 
printf("\nDigite o Novo Salario:\n");
scanf("%f",&novo_salario);
altera_salario(&funcionarios[indicador],novo_salario);

for (i=0;i<f;i++){
    printf("\nFuncionario %d\n", i+1);
    imprimir(&funcionarios[i]);
}
maior_menor_salario(f, funcionarios);
return 0;
}