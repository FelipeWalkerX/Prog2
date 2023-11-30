/*Escreva uma função que receba como parâmetro uma matriz A 
contendo N linhas e N colunas. A função deve retornar o ponteiro
para um vetor B de tamanho N alocado dinamicamente, em que cada 
posição de B é a soma dos números daquela coluna da matriz.*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int* somarColunas(int** matriz, int N){     //matriz precisa de um ponteiro pra ponteiro (pois o ponteiro das linhas ficam dentro do das colunas)

int *vetorB = (int*) malloc(200);

if(vetorB == NULL){`
    printf("Deu bosta!");   //Erro ao alocar na memoria
    return NULL;
}

    for(int i = 0; i < N; i++){
        vetorB[i] = 0;          //Iniciar a matriz B com 0 pra nao ficar lixo de memoria

    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            vetorB[j] = vetorB[j] + matriz[i][j];
    }
    return vetorB;
}

int main(){

    int N = 2;      //tamanho da matriz

    int **matriz = (int**)malloc(200)

    for(int i = 0; i < N; i++){
        matriz[i] = (int*)malloc(100)
    }

    int valorMatriz = 1
    for

    return 0;
}
