#include <stdio.h>
int main()
{
    int numeroProdutos, quantidade;
    int esgotados = 0;
    int estoqueBaixo = 0;
    int estoqueNormal = 0;
    int estoqueAlto = 0;
    float totalItens = 0;
    float media;

    printf("Quantos produtos serão cadastrados: ");
    scanf("%d", &numeroProdutos);
    for(int i = 1; i <= numeroProdutos; i++){
        printf("Quantidade do produto %d: ", i);
        scanf("%d", &quantidade);
        if(quantidade == 0) {
            printf("Esgotado!\n");
            esgotados++;
        }
        else if(quantidade < 10) {
            printf("Estoque Baixo!\n");
            estoqueBaixo++;
        }
        else if(quantidade >= 10 && quantidade <= 50) {
            printf("Estoque Normal!\n");
            estoqueNormal++;
        }
        else {
            printf("Estoque Alto!\n");
            estoqueAlto++;
        }
        totalItens += quantidade;
    }
    media = totalItens / numeroProdutos;
   
    printf("Total de itens no estoque: %d", totalItens);
    printf("\nMédia de itens por produto: %.2f", media);
}
