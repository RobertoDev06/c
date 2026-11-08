
#include <stdio.h>

int main() {

    int opcao, quantidade;

    float preco, subtotal, desconto, totalLiquido, retirada;
    float totalCompra = 0;

    do {
        printf("\n===== SISTEMA DE VENDAS =====\n");
        printf("1 - Adicionar Produto\n");
        printf("2 - Remover Produto\n");
        printf("3 - Ver Total\n");
        printf("0 - Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                // ADICIONAR PRODUTO
                printf("\nDigite o preco do produto: R$ ");
                scanf("%f", &preco);

                while (preco <= 0) {
                    printf("Preco invalido!\nDigite um valor maior que zero: R$ ");
                    scanf("%f", &preco);
                }

                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);

                while (quantidade <= 0) {
                    printf("Quantidade invalida!\nDigite um valor maior que zero: ");
                    scanf("%d", &quantidade);
                }

                subtotal = preco * quantidade;
                totalCompra += subtotal;

                printf("\nProduto adicionado com sucesso!\n");
                printf("Preco unitario: R$ %.2f\n", preco);
                printf("Quantidade: %d\n", quantidade);
                printf("Subtotal: R$ %.2f\n", subtotal);
                printf("Total da compra: R$ %.2f\n", totalCompra);

                break;

            case 2:
                // REMOVER PRODUTO
                printf("\nDigite o valor que deseja remover: R$ ");
                scanf("%f", &retirada);

                if (retirada > 0 && totalCompra >= retirada) {
                    totalCompra -= retirada;

                    printf("\nRemocao realizada com sucesso!\n");
                    printf("Total da compra: R$ %.2f\n", totalCompra);

                } else {
                    printf("\nNao foi possivel remover o valor!\n");
                    printf("Total disponivel: R$ %.2f\n", totalCompra);
                }

                break;

            case 3:
                // VER TOTAL
                printf("\nTotal atual da compra: R$ %.2f\n", totalCompra);

                break;

            case 0:
                // FINALIZAR COMPRA
                printf("\nFinalizando compra...\n");

                if (totalCompra > 200) {
                    desconto = totalCompra * 0.10;
                }
                else if (totalCompra > 100) {
                    desconto = totalCompra * 0.05;
                }
                else {
                    desconto = 0;
                }

                totalLiquido = totalCompra - desconto;

                printf("\nTotal da compra: R$ %.2f\n", totalCompra);
                printf("Desconto aplicado: R$ %.2f\n", desconto);
                printf("Valor final: R$ %.2f\n", totalLiquido);

                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
