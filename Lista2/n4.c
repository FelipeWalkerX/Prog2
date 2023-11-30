/*4) Faça uma função que calcule receba um vetor
de inteiros e retorne a soma de seus elementos*/


#include<stdio.h>
#include<stdlib.h>


int somaElem(int vetor[], int tamanho){
    if(tamanho == 0)
        return 0;
    else
        return vetor[tamanho- 1] + somaElem(vetor, tamanho - 1);
}


int main(){


    int T;
    int* V;


    printf("Digite qual o tamanho do vetor que voce deseja: \n");
    scanf("%d", &T);

    V = (int*) malloc (T * sizeof(int));


    if(V == NULL){
    printf("Memoria insuficiente \n");
    exit(1);
    }


    for (int i = 0; i < T; i++){

        printf("Digite o n° que ficara na posicao [%d]: \n", i+1);
        scanf("%d",&V[i]);
    }
   
    printf("Soma: %d \n", somaElem(V, T));

    free(V);


    return 0;
}
