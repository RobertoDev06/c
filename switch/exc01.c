// Dia da semana

#include <stdio.h>
int main()
{
    int numero;

    printf("Digite um numero para um dia: ");
    scanf("%d", &numero);

    switch(numero){
        case 1: 
            printf("1 - Domingo");
            break;
        case 2:
            printf("2 - Segunda-feira");
            break;
        case 3:
            printf("3 - Terça-feira");
            break;
        case 4:
            printf("4 - Quarta-feira");
            break;
        case 5:
            printf("5 - Quinta-feira");
            break;
        case 6:
            printf("6 - Sexta-feira");
            break;
        case 7:
            printf("7 - Sabado");
            break;
        default:
            printf("Nenhum dia escolhido!");
            break;
    }
}