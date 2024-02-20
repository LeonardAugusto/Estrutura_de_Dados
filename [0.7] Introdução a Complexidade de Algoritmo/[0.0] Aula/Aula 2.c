/*
Complexidade de tempo - Tipos de Analise
    Pior caso:
        - Maior tempo de execução de um algoritmo para qulauqer entrada de tamanho n
        - É o tipo mais utilizado. Todos gostam de garantia
    Caso Médio:
        - Tempo esperado de um algoritmo sobre as entradas de tamanho n
        - Necessidade de usar distribuição estatística
    Melhor Caso:
        - Raramente é feito

Exemplo seria a complexidade de tempo do Insertion Sort?

void insertionSort (int arry[], int n){
    int i, key k;                       
    for (i=1;i<n;i++){                  
        key =arr[i];                    
        j = i-1;                                         
        while (j>= 0 && arr[j]>key){    
            arr[j+1] = arr[j];         
            j = j-1;                    
        }
        arr[j+1]= key;                  
    }
}

O(N^2) - Pior caso
O(N)   - Melhor caso (Já está ordenado)

*/