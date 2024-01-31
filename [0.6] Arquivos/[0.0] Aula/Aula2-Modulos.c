/*
Tipos Abstratos de dados

    Ideia Central
    Encapsular um determinado tipo a forma concreta com que ele foi implementado.

    Benefícios
        Desacomplamento da implementação do uso
        Facilidade da manutenção 
        Aumento do reuso

Módulos e compilação em separado

    Módulo
        Arquivo com funções que representam parte de uma implemntação
        A implementação de um programa pode ser composta por um ou mais módulos
    Programa composto por vários módulos
        Cada um compilado separadamente (.o ou .obj)
        O ligador (linker) reúne todos os arquivos objeto em um único arquivo executável
    Para programas de médio e grande porte, a sua divisão em vários módulos é fundamental.

    Exemplo do uso de módulos em C:
    - Arquivo str.c para manipulação de strings:
        comprimento:
        copia;
        cocatena.
    - Arquivo prog1.c

        > gcc -c str.c
        > gcc -o prog1.c
        > gcc -o prog1.exe str.o prog1.o    > Junção (Link) dos arquivos + Executável

        #include "str.h"

*/
