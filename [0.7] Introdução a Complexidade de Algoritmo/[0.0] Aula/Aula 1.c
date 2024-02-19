/*
Sequencia finita de Instruções bem definidas não ambíguas, cada uma das quais devendo ser executadas 
em um intervalo de tempo finito e com uma quantidade de esforço finita.

Descrição de descrever algoritmos:
    Linguagem Natural
        -Expressividade
        -Flexibilidade
    Pseudocódigo
        -Reduz Ambiguidade
        -Abstrai detalhes não importantes
        -De fácil assimilação em humanos
    Código
        - Conciso
        - Formal

Avaliação de Algoritimo
    - Quanto tempo de processamento e espaço de memória requer para execução.
    - Julgar quantitativamente um algoritimo a outro.   
    Propriedades
        Corretude
            Está correto se para toda entrada(legal) ele produz a saída correta
        Simplicidade
            Fácil de ser entendido
            Fácil de implemntar
            Fácil de Manter
        Eficiencia
            Tempo
                Quanto leva para produizr a saída correta
            Espaço
                Quanto espaço de memória é necessiária para executar
Complexidade de espaço
    - Espaço requuerido por um algoritimo
        - Parte fixa (Independe da Saída ou Entrada)
        - Variável (Depende da instância do problema sendo resolvido)
Complexidade de Tempo
    -Tempo de execusão dada determinada entrada, número de operações primitivas executadas.
        - Operações primitivas: Atribuições, somas, etc...
        - Cada linha do pseudocódigo requer tempo constante para ser executado (independente do tamanho do input)
        - Linhas diferentes podem requerer tempos diferentes.
        - O tempo total é a soma dos tempos de cada linha do algoritimo..
*/

/*

int funcao_aula (int max1, int max2){
    int count 1, count 2; // 1 vez : c1
    for (count1=0;coun1<max1;count1++){ //C2: n vezes
        for (count 2=0; count 2<max2;count2++){ //C3 nxn = N^2vezes
            printf ("Exemplo da Aula"); //C4 n^2 vezes 
        }
    }
    return 0; // C5 1 vez
}

T(MAX) = a(n-1)+b
T(MAX) = an-a+b
T(Max) = an
T(MAX) = O(N)


T(funcao_aula)= c1 + nc2+ n^2c3+n^2c4+c5 = (C3+C4)n^2 + nc2 + (c1+c5) = a(n^2)+b(n)+c
an^2+bn+c
an^2+bn
an^2
n^2
Notação Big-O
O(N^2)

*/