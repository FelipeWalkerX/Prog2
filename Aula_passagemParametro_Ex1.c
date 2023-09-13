/*Escreva um programa que receba um número inteiro
representando a quantidade total de segundos e, usando
passagem de parâmetros por referência, converta a
quantidade informada de segundos em Horas, Minutos e
Segundos. Imprima o resultado da conversão no formato
HH:MM:SS. Utilize o seguinte protótipo da função:*/

/*void converteHora(int total_segundos, int* hora, int* min, int* seg)*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void converteHora(int total_segundos, int* hora, int* min, int* seg){

    *hora = *seg / 3600;
    *min = total_segundos / 3600;
    *seg = total_segundos % 60;
    

    return;
}

int main(){

    int total_segundos;
    int hora;
    int min;
    int seg;

    printf("Digite o total de segundos: ");
    scanf("%d", &total_segundos);
    converteHora(total_segundos, &hora, &min, &seg); //Tem que ser na mesma ordem da funcao

    printf("\nO tempo fornecido foi %d:%d:%d", hora, min, seg);

    return 0;
}
