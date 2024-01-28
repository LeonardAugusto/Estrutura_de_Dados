#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que implementa uma struct Produto com os campos nome, preço e tipo. O
tipo deve ser armazenado como um enum que armazena um dos tipos: ALIMENTO, BEBIDA ou
ELETRÔNICO. O programa deve ler os dados de um produto e imprimir os dados do produto.
*/

//Enum dando as constantes de Alimento, Bebida e Eletronico
typedef enum tipo{
    Alimento,
    Bebida,
    Eletronico
}Tipo;

//Struct produto com os campos nome, preço e tipo.
typedef struct produto{
    char nome[50];
    float preco;
    Tipo type;
}Produto;

//Função que preenche os dados
void dados_pr (Produto *p){
    printf("Informe o nome:\t");
    scanf(" %[^\n]", p->nome);
    printf("Informe o preco:\t");
    scanf("%f",&p->preco);
    printf("Informe o Tipo do Produto: 0- Alimento, 1- Bebida, 2- Eletronico\t");
    scanf("%d", &p->type);
};

int main (void){
    Produto *produto = malloc (sizeof(Produto));
    dados_pr (produto);// Função recebe o endereço da variável
    printf("Nome: %s \n Preco: %.2f \n ", produto->nome, produto->preco);
    /*
    Aqui se utiliza o Switch para captar as constantes dadas pelo Enum:
    0- Alimento, 1- Bebida, 2- Eletrônico.
    Caso tenha sido preenchido outro valor ele vai corresponder uma 
    mensagem de erro.
    */
    switch (produto->type)
    {
    case 0:
    printf("Alimento");
        break;
    case 1:
    printf("Bebida");
        break;
    case 2:
    printf("Eletronico");
        break;
    default:
    printf("Erro de Catalogo");
        break;
    }
    free(produto);
    return 0;
};
