#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float imc(char sexo, float altura){

    float pesoIdeal;

    if(sexo == 'm'){
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'f'){
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    return pesoIdeal;
}

int main(){

    char sexo;
    float altura, peso_ideal;


    printf("Digite seu sexo");
    printf("\nM para masculino e F para feminino: ");
    scanf(" %c", &sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    peso_ideal = imc(sexo, altura);

    printf("Seu imc é: %.2f", peso_ideal);

    return 0;
}
