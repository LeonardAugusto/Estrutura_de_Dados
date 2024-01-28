#include <stdio.h>
#include <stdlib.h>
/*
Questão 1) Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
produto (gostou/não gostou). Escreva um programa em C que:
a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados,
um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
para a segunda pergunta.
b) determine a porcentagem de pessoas do sexo feminino que responderam que
gostaram do produto.
c) determine a porcentagem de pessoas do sexo masculino que responderam que não
gostaram do produto.
*/


int main() {

    int pessoas, i;


    printf("Digite o numero de pessoas entrevistadas: ");
    scanf("%d", &pessoas);

    char *sexo = (char *)malloc(pessoas * sizeof(char));
    char *feedback = (char *)malloc(pessoas * sizeof(char));
    if (sexo == NULL || feedback == NULL) {
        printf("Erro na alocaçao de memoria.\n");
        return 1; 
    }

    for (int i = 0; i < pessoas; i++) {
        printf("Resposta Numero %d\n", i + 1);
        printf("Sexo (M para Masculino, F para Feminino):\n");
        scanf(" %[^\n]", &sexo[i]);
        printf("Gostou? (S para sim, N para nao)\n");
        scanf(" %[^\n]", &feedback[i]);
    }

    // Repetição para saber o número total de homens e mulheres para porcentagem
    int totalmulheres = 0;
    int totalhomens = 0;

    for (i=0; i<pessoas; i++){
        if (sexo[i] == 'F'){
            totalmulheres++;
        }
    }

    for (i=0;i<pessoas;i++){
        if (sexo[i] == 'M'){
            totalhomens++;
        }
    }

    // Componentes B e C da questão: Homens que não gostaram e Mulheres que gostaram.
    int mulheresGostaram = 0;
    for (int i = 0; i < pessoas; i++) {
        if (sexo[i] == 'F' && feedback[i] == 'S') {
            mulheresGostaram++;
        }
    }
    float porcentagemMulheresGostaram = (float)mulheresGostaram / totalmulheres * 100;

    int homensNaoGostaram = 0;
    for (int i = 0; i < pessoas; i++) {
        if (sexo[i] == 'M' && feedback[i] == 'N') {
            homensNaoGostaram++;
        }
    }
    float porcentagemHomensNaoGostaram = (float)homensNaoGostaram / totalhomens * 100;


    if (totalmulheres == 0){
        printf("Nao ha mulheres na pesquisa");
    } else {
         printf("\nPorcentagem de mulheres que gostaram do produto: %.2f%%\n", porcentagemMulheresGostaram);   
    }
    if (totalhomens == 0){
        printf("Nao ha homens na pesquisa");
    } else {
          printf("Porcentagem de homens que nao gostaram do produto: %.2f%%\n", porcentagemHomensNaoGostaram);  
    }

    free(sexo);
    free(feedback);
    return 0;
}