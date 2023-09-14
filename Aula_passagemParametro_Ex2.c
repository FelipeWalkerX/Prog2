/*Reescreva o exercício anterior utilizando a estrutura horário
(contendo hora, minuto e segundo) e passando a estrutura por
referência. Utilize o seguinte protótipo da função:
void converteHorario(int total_segundos, Horario* hor) */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{

    int hor;
    int min;
    int seg;

}   horario;

void converteHorario(int total_segundos, horario* hor, horario* min, horario* seg){

    //transformar segundos em horas
    *hor = total_segundos / 3600;
    
    //verificar se teve resto pra transformar em minutos
    *seg = total_segundos % 3600;
    *min = *seg / 60;

    //verificar se teve resto e salvar nos segundos
    *seg = total_segundos % 60;

}

int main(){

    int total_segundos;
    horario hor, min, seg

    printf("Digite o total de segundos: ");
    scanf("%d", &total_segundos);
    converteHorario(total_segundos, &hor, &min, &seg); //Tem que ser na mesma ordem da funcao

    printf("\nO tempo fornecido foi %d:%d:%d", hor, min, seg);

    return 0;
}
