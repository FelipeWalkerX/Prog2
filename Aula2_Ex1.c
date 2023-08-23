#include<stdio.h>
#include<stdlib.h>
#include<math.h>

enum MesesAno {Janeiro=1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

int main(){
    enum MesesAno mes;

    printf("Insira um valor para o mes correspondente: ");
    scanf("%i", &mes);
    
    switch(mes){

        case Janeiro:
        printf("O mes é Janeiro com 31 dias");
        break;

        case Fevereiro:
        printf("O mes é Fevereiro com 28 dias");
        break;

        case Marco:
        printf("O mes é Marco com 30 dias");
        break;

        case Abril:
        printf("O mes é Abril com 30 dias");
        break;

        case Maio:
        printf("O mes é Maio com 31 dias");
        break;
        
        case Junho:
        printf("O mes é Junho com 30 dias");
        break;
        
        case Julho:
        printf("O mes é Julho com 31 dias");
        break;

        case Agosto:
        printf("O mes é Agosto com 31 dias");
        break;

        case Setembro:
        printf("O mes é Setembro com 30 dias");
        break;

        case Outubro:
        printf("O mes é Outubro com 31 dias");
        break;

        case Novembro:
        printf("O mes é Novembro com 30 dias");
        break;

        case Dezembro:
        printf("O mes é Dezembro com 31 dias");
        break;

        default:
        break;
    }


    return 0;
}
