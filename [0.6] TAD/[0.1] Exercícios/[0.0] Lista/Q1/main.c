#include <stdio.h>
#include <stdlib.h>
#include "ingresso.c"

int main (void){
int f,i;
printf ("Digite quantos ingressos serao:\n");
scanf("%d", &f);
Ingresso ingressos[f];
//Preenchimento
for(i=0; i < f; i++) {
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
    return 0;
}