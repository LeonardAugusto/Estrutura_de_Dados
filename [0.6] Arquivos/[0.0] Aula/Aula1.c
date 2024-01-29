/*
    Um arquivo pode ser visto de duas formas:
        - Texto
        - Binário
    Podemos obtar por salvar e/ou recuperar informações em disco em um dos dois modos.

    Aruivos são acompanhados por um nome e uma extenção.
        Exemplo:
        nome.c  - Extensão de C
        arq.txt - Extensão de Txt
    
    Uma das informações mantidas pelo SO (Sistema operacional) é o cursor que indica a posição de trabalho no arquivo (Ponteiro)

    Função basica para abrir um arquivo:
    FILE*fopen(char* nome_arquivo,char*modo);

    Existem diversos modos:
    r = Read    a = Append  b = Binary
    w = Write   t = Text    

    Função para fechamento do arquivo:
    int fclolse (FILE*p);

    Funções para ler dados:
    - int fscanf (FILE*fp,char*formato,...);
                    (Aqruivo que deseja ler, formatação)
        Ler os dados de um arquivo
    - int fgetc (FILE*fp);
        Ler os dados de um arquivo (pega um unico caractere)
    - char* fgets (char*s, int n, FILE*p);
                    (String pra armazenar os dados,linha,ponteiro do arquivo)
        Ler os ados de um arquivo (pega string)
    
    Funções para escrever dados:
    - int fprinf(FILE*fp,char*formato,...)
    - int fputc('')
    - int fputf('')



*/

/*
//Código 1 - Criar Arquivo de Texto
#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE*fp;
    fp= fopen("entrada.txt","wt"); //Cria um arquivo de nome entrada com extensão txt
    if (fp==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else {
        printf("Arquivo criado!");
    }
    return 0;
}
*/

/*
//Código 2 - Fechar arquivo
#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE*fp;
    fp= fopen("entrada.txt","wt"); //Cria um arquivo de nome entrada com extensão txt
    if (fp==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else {
        printf("Arquivo criado!");
    }
    if(fclose(fp)==0){
        printf("Arquivo fechado com sucesso!\n");
    } // Fecha o arquivo 
    return 0;
}
*/

/*
    Codigo 2 em Phyton .-.

    arquivo = open("entrada.txt","w")
    arquivo.close()

*/


/*
//Código 3 - Ler Arquivo (fgetc)
#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE*fp;
    fp= fopen("entrada.txt","rt"); //Lêu um arquivo
    int c;
    if (fp==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else {
        printf("Arquivo criado!\n");
    }
    c=fgetc(fp);        //Lê um caractere do arquivo
    printf("%c\n",c);   //Imprime o que leu
    if(fclose(fp)==0){
        printf("Arquivo fechado com sucesso!\n");
    } // Fecha o arquivo 
    return 0;
}
*/

/*
//Código 4 - Ler Arquivo (fgets)
#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE*fp;
    fp= fopen("entrada.txt","rt"); //Lêu um arquivo
    char c[20];
    if (fp==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else {
        printf("Arquivo criado!\n");
    }
    fgets(c,20,fp);     //Ler uma linha do arquivo, c variável, 20 tamanho, fp nome do arquivo
    printf("%s\n",c);   //Imprime o que leu

    if(fclose(fp)==0){
        printf("Arquivo fechado com sucesso!\n");
    } // Fecha o arquivo 
    return 0;
}
*/
/*
//Código 5 - Ler Arquivo (fgetscan)
#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE*fp;
    fp= fopen("entrada.txt","rt"); //Lêu um arquivo
    char c[20];
    if (fp==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else {
        printf("Arquivo criado!\n");
    }
    fscanf(fp," %[^\n]",c);
    printf("%s\n",c);   //Imprime o que leu

    if(fclose(fp)==0){
        printf("Arquivo fechado com sucesso!\n");
    } // Fecha o arquivo 
    return 0;
}
*/

/*
    Codigo 3 -5 em Phyton .-.

    arquivo = open("entrada.txt","w")
    print(arquivo.read())
    arquivo.close()
*/

/*
//Código 6 - Escrita de dados (fputc)
#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE*fp;
    fp= fopen("entrada_escrita.txt","w"); 
    if (fp==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else {
        printf("Arquivo criado!\n");
    }

    fputc('A',fp);

    if(fclose(fp)==0){
        printf("Arquivo fechado com sucesso!\n");
    } // Fecha o arquivo 
    return 0;
}
*/

/*
//Código 7 - Escrita de dados (fputs)
#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE*fp;
    fp= fopen("entrada_escrita.txt","w"); 
    if (fp==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else {
        printf("Arquivo criado!\n");
    }

    fputs("Leonardo Augusto :D",fp);

    if(fclose(fp)==0){
        printf("Arquivo fechado com sucesso!\n");
    } // Fecha o arquivo 
    return 0;
}
*/

/*
//Código 8 - Escrita de dados (fprintf)
#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE*fp;
    fp= fopen("entrada_escrita.txt","w"); 
    if (fp==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else {
        printf("Arquivo criado!\n");
    }

   fprintf(fp, "Meu Texto!");

    if(fclose(fp)==0){
        printf("Arquivo fechado com sucesso!\n");
    } // Fecha o arquivo 
    return 0;
}
*/

/*
//Código 9 - Código com fgetc e EOF
#include <stdio.h>
#include <stdlib.h>
int main (void){
int c;
int nlinhas=0;
FILE *fp;
//Abre arquivo para leitura
fp = fopen ("entrada.txt","rt");
if(fp==NULL){
    printf("Não foi possível abrir arquivo,\n");
    return 1;
}
while ((c= fgetc(fp))!=EOF){ //EOF=Endoffile
    if(c=='\n');
    nlinhas++;
}
fclose(fp);
printf("Numero de linhas = %d\n", nlinhas);
}
*/