// Calendario

#include <stdio.h>
int main()
{
    int mes, dias;

    printf("Qual mês é o seu aniversário: ");
    scanf("%d", &mes);

    switch(mes){
        case 1:
            printf("Mes: Janeiro\n");
            break;
        case 2:
            printf("Mes: Fevereiro\n");
            break;
        case 3:
            printf("Mes: Marco\n");
            break;
        case 4:
            printf("Mes: Abril\n");
            break;
        case 5:
            printf("Mês: Maio");
            break;
        case 6:
            printf("Mes: Junho\n");
            break;
        case 7:
            printf("Mes: Julho\n");
            break;
        case 8:
            printf("Mes: Agosto\n");
            break;
        case 9:
            printf("Mes: Setembro\n");
            break;
        case 10:
            printf("Mes: Outubro\n");
            break;
        case 11:
            printf("Mes: Novembro\n");
            break;
        case 12:
            printf("Mes: Dezembro\n");
            break;
        default:
            printf("Não existe esse mês\n");
    }

    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        case 2:
            dias = 28;
            break;
    }

    printf("Quantidade de dias: %d\n", dias);
}