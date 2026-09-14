// Calculadora Simples

#include <stdio.h>
int main()
{
    float n1, n2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Qual operação irá usar para seu calculo: ");
    scanf(" %c", &operacao);

    switch(operacao){
    case '+':
        resultado = n1 + n2;
        break;
    case '-':
        resultado = n1 - n2;
        break;
    case '*':
        resultado = n1 * n2;
        break;
    case '/':
        if (n2 != 0){
            resultado = n1 / n2;
        } else {
            printf("Erro: divisao por zero!\n");
        }
        break;
    default:
        printf("Nao existe essa operacao\n");
}

    printf("O resultado da operacao foi de: %.2f\n", resultado);
}