// Sistema de Estacionamento

#include <stdio.h>

int main()
{
    int tipo;
    float horas, precoHora, total;

    printf("Tipo de veiculo:\n");
    printf("1 - Moto (R$ 3,00/hora)\n");
    printf("2 - Carro (R$ 5,00/hora)\n");
    printf("3 - Caminhonete (R$ 7,00/hora)\n");
    printf("Digite o tipo: ");
    scanf("%d", &tipo);

    printf("Digite a quantidade de horas: ");
    scanf("%f", &horas);

    switch(tipo){
        case 1:
            precoHora = 3.00;
            break;
        case 2:
            precoHora = 5.00;
            break;
        case 3:
            precoHora = 7.00;
            break;
        default:
            printf("Tipo de veiculo invalido!\n");
            return 0;
    }

    total = precoHora * horas;
    printf("Valor a pagar: R$ %.2f\n", total);

    return 0;
}