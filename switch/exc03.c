// Cadarpio

#include <stdio.h>
int main()
{
    int opcao, quantidade;
    float preco, total;

    printf("Cardapio:\n");
    printf("1 - Hamburguer   (R$ 15,00)\n");
    printf("2 - Cachorro-quente (R$ 12,00)\n");
    printf("3 - Batata frita (R$ 10,00)\n");
    printf("4 - Refrigerante (R$ 6,00)\n");
    printf("5 - Suco         (R$ 8,00)\n");

    printf("\nDigite o codigo do produto: ");
    scanf("%d", &opcao);
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch(opcao){
        case 1:
            preco = 15.00;
            prinf("\nProduto Hambúrguer\n");
            break;

        case 2:
            preco = 12.00;
            prinf("\nProduto Cachorro-Quente\n");
            break;

        case 3:
            preco = 10.00;
            prinf("\nProduto Batata Frita\n");
            break;

        case 4:
            preco = 6.00;
            prinf("\nProduto Refrigerante\n");
            break;
        case 5:
            preco = 8.00;
            printf("\nProduto: Suco\n");
            break;
        default:
            printf("Não existe está opção");
    }

    total = preco * quantidade;
    printf("Valor total da compra: R$ %.2f\n", total);
}