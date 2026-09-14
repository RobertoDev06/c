// Conversor de Medidas

#include <stdio.h>
int main()
{
    float metros, resultado;
    int opcao;

    printf("Digite a medida em metros: ");
    scanf("%f", &metros);
    printf("Escolha a conversao:\n");
    printf("1 - Centímetros");
    printf("2 - Milímetros");
    printf("3 - Quilômetros");
    printf("Qual escolha você deseja: ");
    scnaf("%d", opcao);

    switch(opcao){
        case 1:
            resultado = metros * 100;
            printf("%.2f metros equivalem a %.2f centimetros\n", metros, resultado);
            break;
        case 2:
            resultado = metros * 1000;
            printf("%.2f metros equivalem a %.2f milimetros\n", metros, resultado);
            break;
        case 3:
            resultado = metros / 1000;
            printf("%.2f metros equivalem a %.4f quilometros\n", metros, resultado);
            break;
        default:
            printf("Não existe está opção!");
    }
}