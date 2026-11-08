#include <stdio.h>

int main()
{
    int dia = 1;
    int resultado;

    float meta, bonus, venda, falta;
    float vendido = 0;

    printf("Qual a meta deseja bater: ");
    scanf("%f", &meta);

    while (vendido < meta && dia <= 30) {

        printf("Qual o valor da venda no dia %d: ", dia);
        scanf("%f", &venda);

        if (venda < 0) {
            vendido += venda;

            if (dia > 1) {
                dia--;
            }

            printf("Estorno realizado!\n");
            printf("Total vendido: R$ %.2f\n", vendido);
        }
        else {
            vendido += venda;
            dia++;
        }

        falta = meta - vendido;

        printf("Ainda falta: R$ %.2f\n", falta);
    }

    if (vendido >= meta) {
        resultado = 1;
    }
    else {
        resultado = 2;
    }

    switch (resultado) {

        case 1:
            printf("Parabens! Meta atingida!\n");
            break;

        case 2:
            printf("Meta nao atingida!\n");
            break;

        default:
            printf("Resultado invalido!\n");
    }

    for (int i = 1; i <= 5; i++) {

        if (i % 2 == 0) {
            continue;
        }

        bonus = i * 100;

        printf("Faixa %d - Bonus: R$ %.2f\n", i, bonus);
    }

    return 0;
}