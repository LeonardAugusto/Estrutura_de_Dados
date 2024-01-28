#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que implementa uma struct Produto com os campos nome, pre¸co e tipo. O
tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou
ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto. 
*/

// Union com os tipos Alimento, Bebida e Eletrônico
typedef union tipo{
    int Alimento;
    int Bebida;
    int Eletronico;
}Tipo;

// Struct Produto
typedef struct produto{
    char nome[50];
    float preco;
    Tipo type;
}Produto;

// Função que recebe os dados do Produto
void dados_pr (Produto *p){
    int op;
    printf("Informe o nome:\t");
    scanf(" %[^\n]", p->nome);
    printf("Informe o preco:\t");
    scanf("%f",&p->preco);
    printf("Informe o Tipo do Produto: 1- Alimento, 2- Bebida, 3- Eletronico\t");
    scanf("%d", &op);
    switch (op){
    case 1:
    p->type.Alimento = 1;
        break;
    case 2:
    p->type.Bebida = 2;
        break;
    case 3:
    p->type.Eletronico = 3;
        break;
    default:
    printf("Erro ao Catalogar\n");
        break;
    }
};

int main (void){
    Produto *produto = malloc (sizeof(Produto)); // Alocação Dinâmica
    dados_pr (produto);// Função recebe o endereço da variável
    printf("Nome: %s \nPreco: %.2f\n", produto->nome, produto->preco);
    switch (produto->type.Alimento)
    /*
    Semelhante a questão anterior, o valor inteiro é armazenado em todos os tipos
    o Switch aqui é utilizado pra diferenciar. Ainda é possível utilizar uma função
    printf para imprimir todos os valores. Não alterei por que foi o que realizei no dia.
    */
    {
    case 1:
        printf("Tipo: Alimento");
        break;
    case 2:
        printf("Tipo: Bebida");
        break;
    case 3: 
        printf("Tipo: Eletronico");
        break;
    default:
        printf("O Produto não teve tipo");
        break;
    }
    free(produto);
    return 0;
};
