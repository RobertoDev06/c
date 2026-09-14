// Sistema de Pedidos de Pizzaria

#include <stdio.h>

int main()
{
    char tamanho;
    int quantidade;
    float preco, total;

    printf("Tamanhos disponiveis:\n");
    printf("P - Pequena (R$ 25,00)\n");
    printf("M - Media (R$ 35,00)\n");
    printf("G - Grande (R$ 45,00)\n");
    printf("Digite o tamanho: ");
    scanf(" %c", &tamanho);

    printf("Digite a quantidade de pizzas: ");
    scanf("%d", &quantidade);

    switch(tamanho){
        case 'P':
            preco = 25.00;
            break;
        case 'M':
            preco = 35.00;
            break;
        case 'G':
            preco = 45.00;
            break;
        default:
            printf("Tamanho invalido!\n");
            return 0;
    }

    total = preco * quantidade;
    printf("Valor total do pedido: R$ %.2f\n", total);

    return 0;
}