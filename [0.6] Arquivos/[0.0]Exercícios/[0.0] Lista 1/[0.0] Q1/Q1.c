#include <stdio.h>
   /*
   Questão 1) Escreva um programa em C que leia de um arquivo as notas dos alunos de uma
turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação
(aprovado (média >= 7.0) ou reprovado). Tanto no arquivo de entrada quanto no de saída,
considere que os dados em cada linha estão separados por um caractere de tabulação ‘\t’. Para a
execução do programa com o arquivo de entrada “entrada_q3.txt”, deverá ser criado o arquivo
de saída “saída_q3.txt”, como ilustrado a seguir.
   */
int main (void){
    char nome[50], linha[80];                   // String para guardar o nome e linha
    float n1,n2,n3,md;                          // Variáveis para cálculo da Nota

  FILE* entrada = fopen("entrada_q3.txt","r");  // Abertura do arquivo entrada_q3.txt com a função de leitura
  FILE* saida = fopen ("saida_q3.txt","w");     // Abertura do arquivo saida_q3.txt com a função de escrita

  if ((entrada == NULL)||(saida ==NULL)){      // Condicional para caso um dos arquivos esteja nulo (Qualquer um dos dois)
    printf("Erro ao abrir um dos arquivos.\n");
    return 1;
  };

  while (fgets(linha,80,entrada)!= NULL){     
    if (sscanf(linha,"%s\t%f\t%f\t%f",nome,&n1,&n2,&n3)!=NULL){ // Leitura de cada linha do arquivo entrada colocando nas variáveis
        md = (n1+n2+n3)/3;
        fprintf(saida,"%s\t%.1f\t%s\n",nome, md, (md>=7.0)?"aprovado":"reprovado"); // Escrita do arquivo saida das variáveis nome e md, ternário para aprovado ou reprovado
    } else {
        printf("Erro na linha %s\n",linha);
    }
  }
    fclose(entrada);
    fclose(saida);
    return 0;
}