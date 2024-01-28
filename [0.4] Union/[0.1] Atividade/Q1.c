#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que implementa uma struct Pessoa com os campos nome, idade e gênero. O
gênero deve ser armazenado como um union com os valores MASCULINO e FEMININO. O programa
deve ler os dados de uma pessoa e imprimir os dados da pessoa */

//Union
typedef union genero{
    int masculino;
    int feminino;
}Genero;

//Struct
typedef struct pessoa{
    char nome[50];
    int idade;
    Genero gene;
}Pessoa;

//Função que Preenche os Dados
void preencher (Pessoa *p){
    int op;
    printf("Informe o nome:\t");
    scanf(" %[^\n]", p->nome);
    printf("Informe a idade:\t");
    scanf("%d",&p->idade);
    printf("Informe o Sexo:\t");
    printf("\n1-Feminino, 0-Masculino:\t");
    scanf("%d", &op);
    if (op){
        p->gene.feminino = 1;
    } else{
        p->gene.masculino = 0;
    };
}

//Função que Imprime os Dados
void imprimir (Pessoa*p) {
    printf("Nome: %s\nIdade: %d\n", p->nome, p->idade);
    if (p->gene.masculino == 1){        
    /* O Valor armazenado em gene seja masculino ou feminino será o mesmo
    devido o union, logo ambas as variaveis podem ser utilizadas nesse caso.
    */
        printf("Genero: Feminino\n");
    }else{
        printf("Genero: Masculino\n");
    }
}

int main (void){
    Pessoa *pessoa = malloc (sizeof(Pessoa)); 
    preencher (pessoa);
    imprimir(pessoa);
    free(pessoa);
    return 0;
}