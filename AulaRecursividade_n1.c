#include<stdio.h>
#include<stdlib.h>

int fatorial(int n){
    if(n == 0){
        return 1;

    }else{
        return n * fatorial(n-1); 
        
    }
}


main(){
    int n; = fatorial(5);

    /*printf("Digite um numero: ");
    scanf("%d", &n);
    fatorial(n);*/

    printf("\nO fatorial do numero digitado e: %d \n\n", n);

    return 0;


}
