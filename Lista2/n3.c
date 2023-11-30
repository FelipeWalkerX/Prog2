/*3) Escreva uma função que receba como parâmetro duas matrizes,
A e B, e seus tamanhos. A função deve retornar o ponteiro para
uma matriz C, em que C é o produto da multiplicação da matriz A
pela matriz B. Se a multiplicação das matrizes não for possível,
retorne um ponteiro nulo.*/


#include<stdio.h>
#include<stdlib.h>


int funcao( int n1, int n2 , int n3, int n4){


    int i, j;
    int **mA, **mB, **mC;


    mA = (int **)malloc(n1 * sizeof(int*));
    mB = (int **)malloc(n3 * sizeof(int*));
    mC = (int **)malloc(n1 * sizeof(int*));

    for (i = 0; i < n1; i++) {
        mA[i] = (int *)malloc(n2 * sizeof(int));
        mC[i] = (int *)malloc(n4 * sizeof(int));
    }

    for (i = 0; i < n3; i++) {
        mB[i] = (int *)malloc(n4 * sizeof(int));
    }


    for (i = 0; i < n1; i++) {
      for (j = 0; j < n2; j++) {
        printf ("Digite os n°s da matriz A: \n");
        scanf ("%d", &mA[i][j]);
        }
    }
         printf ("\n");


    for (i = 0; i < n3; i++) {
      for (j = 0; j < n4; j++) {
        printf ("Digite os n°s da matriz B: \n");
        scanf ("%d", &mB[i][j]);
        }
    }


    if (n1 != n3 || n2 != n4) {
        printf("\n Deu bosta! \n");
        return NULL;
    }



    printf("\n Matriz A: \n");
    for (i = 0; i < n1; i++){
      for (j = 0; j < n2; j++) {

           printf (" %d ", mA[i][j]);
    }
        printf ("\n");
    }


    printf("\n Matriz B: \n");
    for (i = 0; i < n3; i++){
      for (j = 0; j < n4; j++) {


        printf (" %d ", mB[i][j]);
    }
        printf ("\n");
    }


    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            mC[i][j] = mA[i][j] * mB[i][j];
        }
    }


    printf("\n Matriz C: \n");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            printf(" %d ", mC[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < n1; i++) {
        free(mA[i]);
        free(mC[i]);
    }


    for (i = 0; i < n3; i++) {
        free (mB[i]);
    }
 
    free(mA);
    free(mB);
    free(mC);


    return mC;
}


int main(){


    int La, Ca, Lb, Cb;


    printf("\n Digite o valor de linhas da matriz A: ");
    scanf("%d",&La);


    printf("Digite o valor de colunas da matriz  A: ");
    scanf("%d",&Ca);


    printf("\n Digite o valor de linhas da matriz B: ");
    scanf("%d",&Lb);


    printf(" Digite o valor de colunas da matriz  B: \n");
    scanf("%d",&Cb);


    funcao(La, Ca, Lb, Cb);


    return 0;


}
