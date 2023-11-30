


#include<stdio.h>
#include<stdlib.h>


int funcao( int v1, int v2 ){


    int i, j, soma;
    int **matriz, *B;


    matriz = (int *) malloc (v1 * sizeof (int));  
 
    if (matriz == NULL)
        exit (1);


    for (i = 0; i < v1; i++)
        matriz[i] = (int *) malloc (v2 * sizeof (int));


    for (i = 0; i < v1; i++) {
      for (j = 0; j < v2; j++) {
        printf ("DIGITE OS VALORES [%d][%d]: ", i, j);
        scanf ("%d", &matriz[i][j]);
        }
    }


        printf ("\n");


    for (i = 0; i < v1; i++){
      for (j = 0; j < v2; j++) {


        printf (" %d ", matriz[i][j]);
    }
        printf ("\n");
    }


    B = (int *) malloc (v2 * sizeof (int));  


    for ( j = 0; j < v2; j++){
        soma = 0;
        for ( i = 0; i < v1; i++){
            soma += matriz[i][j];
        }


        B[j] = soma;  
    }


    printf("\n");
    printf(" B: ");
    for ( j = 0; j < v2; j++){
        printf(" %d ", B[j]);
    }
   
    printf("\n");


    for (i = 0; i < v1; i++) {
        free (matriz[i]);
        matriz[i] = NULL;
    }
 
    free (B);
    free (matriz);
}


int main(){


    int l, c;


    printf("\ndigite o valor de l: ");
    scanf("%d",&l);


    printf("digite o valor de c: ");
    scanf("%d",&c);


    printf ("\n");
    funcao(l,c);


    return 0;
}


/*3) Escreva uma função que receba como parâmetro duas matrizes,
A e B, e seus tamanhos. A função deve retornar o ponteiro para
uma matriz C, em que C é o produto da multiplicação da matriz A
pela matriz B. Se a multiplicação das matrizes não for possível,
retorne um ponteiro nulo.*/


#include<stdio.h>
#include<stdlib.h>


int funcao( int v1, int v2 , int v3, int v4){


    int i, j;
    int **A, **B, **C;


    A = (int **)malloc(v1 * sizeof(int *));
    B = (int **)malloc(v3 * sizeof(int *));
    C = (int **)malloc(v1 * sizeof(int *));


    for (i = 0; i < v1; i++) {
        A[i] = (int *)malloc(v2 * sizeof(int));
        C[i] = (int *)malloc(v2 * sizeof(int));
    }


    for (i = 0; i < v3; i++) {
        B[i] = (int *)malloc(v4 * sizeof(int));
    }


    for (i = 0; i < v1; i++) {
      for (j = 0; j < v2; j++) {
        printf ("DIGITE OS VALORES DE A [%d][%d]: ", i, j);
        scanf ("%d", &A[i][j]);
        }
    }
         printf ("\n");


    for (i = 0; i < v3; i++) {
      for (j = 0; j < v4; j++) {
        printf ("DIGITE OS VALORES DE B [%d][%d]: ", i, j);
        scanf ("%d", &B[i][j]);
        }
    }


    if (v1 != v3 || v2 != v4) {
        printf("\nmultiplicacao das matrizes nao foi possivel");
        return NULL;
    }


    printf ("\n");
    printf("matriz A\n");
    for (i = 0; i < v1; i++){
      for (j = 0; j < v2; j++) {


        printf (" %d ", A[i][j]);
    }
        printf ("\n");
    }


    printf ("\n");
    printf("matriz B\n");
    for (i = 0; i < v3; i++){
      for (j = 0; j < v4; j++) {


        printf (" %d ", B[i][j]);
    }
        printf ("\n");
    }


    for (i = 0; i < v1; i++) {
        for (j = 0; j < v2; j++) {
            C[i][j] = A[i][j] * B[i][j];
        }
    }


    printf("\n");
    printf("matriz C\n");
    for(i = 0; i < v1; i++) {
        for(j = 0; j < v2; j++) {
            printf(" %d ", C[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < v1; i++) {
        free(A[i]);
        free(C[i]);
    }


    for (i = 0; i < v3; i++) {
        free (B[i]);
    }
 
    free(A);
    free(B);
    free(C);


    return C;
}


int main(){


    int l1, c1, l2,c2;


    printf("\ndigite o valor de linhas de A: ");
    scanf("%d",&l1);


    printf("digite o valor de colunas de A: ");
    scanf("%d",&c1);


    printf("\ndigite o valor de linhas de B: ");
    scanf("%d",&l2);


    printf("digite o valor de colunas de B: ");
    scanf("%d",&c2);


    printf ("\n");
    funcao(l1,c1,l2,c2);


    return 0;


}



/*4) Faça uma função que calcule receba um vetor
de inteiros e retorne a soma de seus elementos*/


#include<stdio.h>
#include<stdlib.h>


int soma(int vt[], int tamanho){
    if(tamanho == 0)
        return 0;
    else
        return vt[tamanho- 1] + soma(vt, tamanho - 1);
}


int main(){


    int tam;
    int* vetor;


    printf("\ndigite o tamanho do vetor: ");
    scanf("%d",&tam);


    printf("\n");


    vetor = (int*) malloc (tam * sizeof(int));


    if(vetor == NULL){
    printf("\nMemoria insuficiente");
    exit(1);
    }


    for (size_t i = 0; i <tam; i++){


        printf("digite o valor da posicao [%d]: ",i);
        scanf("%d",&vetor[i]);
    }
   
    printf("\n\nSoma: %d\n", soma(vetor, tam));


    printf("\n");
    free(vetor);


    return 0;
}


/*5) Faça um programa contendo uma função que receba o nome
de um arquivo de texto contendo uma sequencia de números, o
primeiro valor representa o tamanho da sequencia (quantidade
de elementos) e salve os dados em um vetor alocado dinamicamente
e retorne esse vetor.*/


#include <stdio.h>
#include <stdlib.h>
#define TAM 300


int* entrada(const char* arc, int* tam) {


    FILE* pont;


    pont = fopen(arc, "r");
    if (pont == NULL) {
        printf("Arquivo inexistente.");
        exit(1);
    }


    fscanf(pont, "%d", tam);


    int* vet = (int*)malloc(*tam * sizeof(int));
    if (vet == NULL) {
        printf("\nMemoria insuficiente");
        fclose(pont);
        exit(1);
    }
    for (int i = 0; i < *tam; i++) {
        fscanf(pont, "%d", &vet[i]);
    }


    fclose(pont);
    return vet;
}


int main() {


    int tamanho;
    const char* arc = "dados.txt";


    int* vet = entrada(arc, &tamanho);


    printf("DADOS DO ARQUIVO:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    free(vet);


    return 0;
}


/*6) Usando as funções anteriores, crie um programa que leia
um vetor de dados em um arquivos, calcule a soma desse vetor
utilizando outra função e escreva a resposta no final arquivo
original adicionando uma nova linha contendo "A soma dos
valores é <valor>"*/


#include <stdio.h>
#include <stdlib.h>
#define TAM 300


int* entrada(const char* arc, int* tam) {


    FILE* pont;


    pont = fopen(arc, "r");
    if (pont == NULL) {
        printf("Arquivo inexistente.");
        exit(1);
    }


    fscanf(pont, "%d", tam);


    int* vet = (int*)malloc(*tam * sizeof(int));
    if (vet == NULL) {
        printf("\nMemoria insuficiente");
        fclose(pont);
        exit(1);
    }
    for (int i = 0; i < *tam; i++) {
        fscanf(pont, "%d", &vet[i]);
    }


    fclose(pont);
    return vet;
}


int somavet(int* vet, int tam){


    if(tam == 0)
        return 0;
    else
        return vet[ tam- 1] + somavet(vet, tam - 1);


}


void resultado(const char* arc, int soma) {
    FILE* pont;


    pont = fopen(arc, "a");
    if (pont == NULL) {
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }


    fprintf(pont, "\nA soma dos valores é %d", soma);
    fclose(pont);
}


int main() {


    int tamanho;
    const char* arc = "dados.txt";


    int* vet = entrada(arc, &tamanho);
    int soma = somavet(vet, tamanho);


    printf("DADOS DO ARQUIVO:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");


    printf("\n\nSOMA: %d\n", soma);


    resultado(arc, soma);
    free(vet);


    return 0;
}
