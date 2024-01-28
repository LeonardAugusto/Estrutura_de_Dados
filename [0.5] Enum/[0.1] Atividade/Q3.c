#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que implementa uma struct Data com os campos dia, mês e ano. O mês deve
ser armazenado como um enum com os valores JANEIRO, FEVEREIRO, MARÇO, ABRIL, MAIO,
JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO e DEZEMBRO. O programa
deve ler a data e imprimir a data no formato dd/mm/aaaa.
*/

//Enum com os Meses do Ano
typedef enum meses{
/*
Obs: Aderi por identificar a variável pois fica mais fácil interpretar com a lógica do
calentário. Logo: Janeiro = 1. Fevereiro = 2 etc, algo mais intuitivo que Janeiro = 0
, Fevereiro = 1
*/
    Janeiro =1,
    Fevereiro,
    Marco,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Dezembro
}Meses;

//Struct data contendo dia, ano e mês
typedef struct data{
    int dia, ano;
    Meses meses;
}Data;

//Função que preenche a data
void escreve_data (Data *d){
    printf("Escreva o dia:\n");
    scanf("%d",&d->dia);
    printf("Escreva o numero do mes:\n");
    scanf("%d", &d->meses);
    printf("Escreva o ano:\n");
    scanf("%d", &d->ano);
}
//Função que imprime a data
void imprime_data (Data*d){
    printf("%d/%d/%d", d->dia, d->meses, d->ano);
}

int main (void) {
    Data *data = malloc(sizeof(Data));
    escreve_data (data);
    imprime_data (data);
    free(data);
    return 0;
}

/*
O programa só está fazendo o que a questão pede, mas poderia
ter implementações como se o mês ou dia não estivesse correspondendo.
Exemplo: Mês de fevereiro ser digitado 31, Ano Bissexto com um dia extra
no calendário ou um mês ou dia não correspondente (Como por exemplo, dia 0 ou
mês 13)
*/