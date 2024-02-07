#include <stdio.h>
#include <stdlib.h>
#include "ingresso.h"


struct ingresso{ 
    float preco;
    char local[50];
    char atracao[50];
};


void preenche (Ingresso *i){ //A
    printf ("Atracao do Ingresso:\n");
    scanf (" %[^\n]", i->atracao);
    printf("Local do Ingresso:\n");
    scanf (" %[^\n]", i->local);
    printf("Preco do Ingresso:\n");
    scanf ("%f", &i->preco);
}

void imprime (Ingresso *i){
    printf("Atracao: %s\nLocal: %s\nPreco: %.2f\n", i->atracao, i->local, i->preco);
}

void altera_preco(Ingresso *i, float valor){
    i->preco = valor;
}

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