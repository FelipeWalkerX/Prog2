/*Crie uma função que receba uma string e retorne o ponteiro 
para essa string invertida.*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char* inverteNome(char *nome){
    int tamanho = strlen(nome);     //pegando o tamanho do nome
    char *inverter = (char*) malloc(100);        //Alocando 100 caracteres de memoria

    if(inverter == NULL){            //Vendo se conseguiu ou nao alocar na memoria
        printf("Deu bosta!");
        return NULL;                //Sair
    }
    for(int i = 0; i < tamanho; i++){
        inverter[i] = nome[tamanho - i - 1];     //Invertendo as letras
    }

   // inverter[tamanho] = '\0';           //Colocar esse \0 no tamanho para nao ficar com lixo de memoria no final

    return inverter;
}

int main(){

    char nome[100];

    printf("Digite seu nome para ver ele invertido: ");
    scanf("%s", nome);

    char *nomeInvertido = inverteNome(nome);

    printf("\n Nome: %s \n", nome);
    printf("\n Nome Invertido: %s \n", nomeInvertido);

    free(nomeInvertido);        //libera a memoria


return 0;

}
