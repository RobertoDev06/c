// Menu de Calculo de Areas

#include <stdio.h>

#define PI 3.14159

int main()
{
    int opcao;
    float lado, base, altura, raio, area;

    printf("1 - Area do quadrado\n");
    printf("2 - Area do retangulo\n");
    printf("3 - Area do triangulo\n");
    printf("4 - Area do circulo\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("Area do quadrado: %.2f\n", area);
            break;
        case 2:
            printf("Digite a base do retangulo: ");
            scanf("%f", &base);
            printf("Digite a altura do retangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("Area do retangulo: %.2f\n", area);
            break;
        case 3:
            printf("Digite a base do triangulo: ");
            scanf("%f", &base);
            printf("Digite a altura do triangulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("Area do triangulo: %.2f\n", area);
            break;
        case 4:
            printf("Digite o raio do circulo: ");
            scanf("%f", &raio);
            area = PI * raio * raio;
            printf("Area do circulo: %.2f\n", area);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}