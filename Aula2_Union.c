#include<stdio.h>
#include<stdlib.h>
#include<math.h>

union Numero{

    int inteiro;
    float real;

};

int main(){

    union Numero numero;
    numero.real = 3.14;
    numero.inteiro = 15;

    printf("%f", numero.real);
    printf("%d", numero.inteiro);

    return 0;

}
