#include <stdio.h>
#include <stdlib.h>
/*
Questão 1) Crie um tipo estruturado para armazenar dados de um ingresso. Uma estrutura deste tipo possui os
seguintes campos: preço, local e atração.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e
preencha seus campos com valores fornecidos pelo usuário via teclado. Protótipo: void
preenche(Ingresso* i);
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e imprima
os valores dos seus campos. Protótipo: void imprime(Ingresso* i);
c) Escreva uma função que receba, como parâmetros, o endereço de uma estrutura do tipo Ingresso e um
novo valor de preço e atualize o preço do ingresso para o novo valor. Protótipo: void
altera_preco(Ingresso* i, float valor);
d) Escreva uma função que receba, como parâmetros, um vetor de ingressos e o tamanho do vetor e
imprima os eventos de ingresso mais barato e mais caro. Protótipo: void imprime_menor_maior_preco(int
n, Ingresso* vet);
e) Escreva uma função main para testar as funções anteriores.
*/

typedef struct ingresso{ //Questão 1
    float preco;
    char local[50];
    char atracao[50];
}Ingresso;

//A
void  preenche (Ingresso *i){ //A
    printf ("Atracao do Ingresso:\n");
    scanf (" %[^\n]", i->atracao);
    printf("Local do Ingresso:\n");
    scanf (" %[^\n]", i->local);
    printf("Preco do Ingresso:\n");
    scanf ("%f", &i->preco);
}
//B
void imprime (Ingresso *i){
    printf("Atracao: %s\nLocal: %s\nPreco: %.2f\n", i->atracao, i->local, i->preco);
}
//C
void altera_preco(Ingresso *i, float valor){
    i->preco = valor;
}
//D
void imprime_menor_maior_preco (int n, Ingresso *vet){
    Ingresso maior = vet[0];
    Ingresso menor = vet[0];

    for (int i = 1; i < n; i++){
        if (vet[i].preco>maior.preco){
            maior = vet[i];
        }
        if (vet[i].preco<menor.preco){
            menor = vet[i];
        }
    }
    printf("Ingresso com Maior Preco\n");
    imprime(&maior);
    printf("Ingresso com Menor Preco\n");
    imprime(&menor);
    
}



int main (void){ //E
int f,i;
printf ("Digite quantos ingressos serao:\n");
scanf("%d", &f);
Ingresso ingressos[f];


//Preenchimento
for (i=0; i<f; i++){
    printf("\nIngresso%d\n", i+1);
    preenche(&ingressos[i]);
}
//Impressão
for (i=0;i<f;i++){
    printf("\nIngresso%d\n", i+1);
    imprime(&ingressos[i]);
}

int indicador;
float valor;
printf("\nDigite o numero ingresso que deseja alterar o valor do preco:\n");
scanf("%d",&indicador);
indicador -= 1; 
printf("\nDigite o Novo Preco:\n");
scanf("%f",&valor);
altera_preco(&ingressos[indicador],valor);

for (i=0;i<f;i++){
    printf("\nIngresso %d\n", i+1);
    imprime(&ingressos[i]);
}
imprime_menor_maior_preco(f, ingressos);
return 0;
}