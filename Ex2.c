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

    Pessoa n, i, p, d, m, a;

    printf("Insira seu nome: ");
    scanf("%s", &n.nome);

    printf("Insira sua idade: ");
    scanf("%i", &i.idade);

    printf("Insira seu peso: ");
    scanf("%f", &p.peso);

    printf("Insira sua data de nascimento (data/mes/ano): ");
    scanf("%i%i%i", &d.data, &m.mes, &a.ano);

    printf("/nNome: %s", n.nome);
    printf("/nIdade: %i", i.idade);
    printf("/nPeso: %.2f", p.peso);
    printf("/nData de Nascimento: %i/%i/%i", d.data, m.mes, a.ano);


    return 0;
}
