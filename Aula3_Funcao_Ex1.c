#include<stdio.h>
#include<stdlib.h>

int imbecil(int a, int b, int c){
    int maior;
    if(a >= b && b >= c){
        maior = a;

    }else if(b > a && b >= c){
        maior = b;

    }else{
        maior =c;

    }
    return maior;
}

int main(){
    int n1, n2, n3, maior;
    printf("\nInsira um numero: ");
    scanf("%i", &n1);
    printf("\nInsira um numero: ");
    scanf("%i", &n2);
    printf("\nInsira um numero: ");
    scanf("%i", &n3);

    maior = imbecil(n1, n2, n3);
    printf("\n O maior valor é: %i", maior);

}
