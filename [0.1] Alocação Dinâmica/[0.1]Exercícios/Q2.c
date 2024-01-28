#include <stdio.h>
#include <stdlib.h>
/*
Questão 2) Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
10 alunos matriculados. Calcule e mostre:
a) a nota obtida para cada aluno;
b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.
*/

int main() {
    int N;
    printf("Digite o Numero de questoes na prova: ");
    scanf("%d", &N);
    char *gabarito = (char *)malloc(N * sizeof(char));
    if (gabarito == NULL) {
        printf("Erro na alocaçao de memoria.\n");
        return 1; 
    }

    printf("Digite o gabarito da prova Multipla Escolha (A|B|C|D): ");
    for (int i = 0; i < N; i++) {
        scanf(" %c", &gabarito[i]);
    }
    
    float notas[10];
    int aprovados = 0;
    for (int aluno = 0; aluno < 10; aluno++) {
        printf("\nRespostas do aluno %d Multipla Escolha (A|B|C|D): ", aluno + 1);
    
    float nota = 0;

    for (int i = 0; i < N; i++) {
            char resposta;
            scanf(" %c", &resposta);
            if (resposta == gabarito[i]) {
                nota += 10.0 / N;
            }
        }

        notas[aluno] = nota;

        if (nota >= 6.0) {
            aprovados++;
        }
    }
    printf("\nNotas dos alunos:\n");
    for (int aluno = 0; aluno < 10; aluno++) {
        printf("Aluno %d: %.2f\n", aluno + 1, notas[aluno]);
    }

    float porcentagemAprovacao = (float)aprovados / 10 * 100;
    printf("\nPorcentagem de alunos que passaram de ano: %.2f%%\n", porcentagemAprovacao);
    free(gabarito);
    return 0;
}