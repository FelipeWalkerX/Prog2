/*Crie um programa de cadastro que receba, armazene, e
em seguida, exiba os dados de 5 pessoas.
 Cada pessoa possui: nome, idade, peso, data de nascimento,
brasileiro ou estrangeiro. Caso seja Brasileiro, armazene o CPF,
caso estrangeiro, armazene o passaporte.
 Regra: Utilize structs, typedef, union e enum.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct {

    char nome[20];
    int idade;
    float peso;
    int data;
    int mes;
    int ano;

} Pessoa;
    
enum Nacionalidade {brasileiro=1, estrangeiro};

int main(){

    Pessoa p1, p2, p3, p4, p5;

    printf("Insira seu nome: ");
    scanf("%s", &p1.nome);

    printf("Insira sua idade: ");
    scanf("%i", &p1.idade);

    printf("Insira seu peso: ");
    scanf("%f", &p1.peso);

    printf("Insira sua data de nascimento (data/mes/ano): ");
    scanf("%i%i%i", &p1.data, &p1.mes, &p1.ano);

    printf("/nNome: %s", p1.nome);
    printf("/nIdade: %i", p1.idade);
    printf("/nPeso: %.2f", p1.peso);
    printf("/nData de Nascimento: %i/%i/%i", p1.data, p1.mes, p1.ano);


    return 0;
}
