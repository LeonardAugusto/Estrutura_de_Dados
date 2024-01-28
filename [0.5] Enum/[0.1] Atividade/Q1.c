#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que implementa uma struct Pessoa com os campos nome, idade e gênero. O
gênero deve ser armazenado como um enum com os valores MASCULINO e FEMININO. O programa
deve ler os dados de uma pessoa e imprimir os dados da pessoa.
*/

//Enum com valores Masculino e Feminino
typedef enum genero{
    masculino,
    feminino
}Genero;

//Struct Pessoa com nome, idade e gênero
typedef struct pessoa{
    char nome[50];
    int idade;
    Genero genero_pessoa;
}Pessoa;

//Função para Preencher os dados
void preencher (Pessoa *p){
    printf("Informe o nome:\n");
    scanf(" %[^\n]", p->nome);
    printf("Informe a idade:\n");
    scanf("%d",&p->idade);
    printf("Informe o Genero:\n");
    printf("\n1-Feminino, 0-Masculino:\t");
    scanf("%d", &p->genero_pessoa);
}

//Função para Imprimir os Dados
void imprimir_pessoa (Pessoa *p){
    printf(" Nome: %s\n Idade: %d\n Genero: %s", p->nome, p->idade, p->genero_pessoa==masculino? "Masculino":"Feminino");
    /*
    O ? é o ternário como alternativa de substituir o if else em condições simples.
    Como a analíse é so se o genero_pessoa é igual a masculino (0) e feminino (1)
    Então é mais fácil de implementar.
    */
}

int main (void){
    Pessoa *pessoa = malloc (sizeof(Pessoa));
    preencher (pessoa);
    imprimir_pessoa (pessoa);
    free(pessoa);
    return 0;
}