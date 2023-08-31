#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calculo(float n1, float n2, float n3, char opcao){

    float resultado;

    if(opcao == 'a'){
        resultado = (n1 + n2 + n3)/3;

    } else if(opcao == 'p'){
        resultado = (n1 * 0.5) + (n2 * 0.3) + (n3 * 0.2);

    } else if(opcao == 's'){
        resultado = n1 + n2 + n3;

    }

    return resultado;
}

int main(){

    float n1, n2, n3, conta;
    char opcao;

    printf("Digite suas 3 notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    printf("\nEscolha uma das opcoes de calculo: ");
    printf("\nA: media aritmética ");
    printf("\nP: media ponderada ");
    printf("\nS soma das notas \n");
    scanf(" %c", &opcao);

    conta = calculo(n1, n2, n3, opcao);

    printf("O resultado do calculo é: %.2f ", conta);


    return 0;
}
