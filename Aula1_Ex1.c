#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ponto
{
    float x;
    float y;
};

int main(){

    struct ponto p1, p2;

    float d;

    printf("Insira o valor da coordenada X do P1: ");
    scanf("%f", &p1.x);

    printf("Insira o valor da coordenada Y do P1: ");
    scanf("%f", &p1.y);

    printf("Insira o valor da coordenada X do P2: ");
    scanf("%f", &p2.x);

    printf("Insira o valor da coordenada Y do P2: ");
    scanf("%f", &p2.y);

    d=sqrt(pow(p2.x-p1.x, 2)+pow(p2.y-p1.y, 2));

    printf("A distancia entre os pontos e de: %.2f", d);

    return 0;
}

