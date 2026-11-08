int main()
{
    char nome[50];
    int i, estoque;
    float valor;
    int vendas = 0;
    float valorTotal = 0;
    i = 0;
    while (i < 6){
        printf("Qual o nome do produto: ");
        scanf("%49s", nome);
        printf("Qual o valor do produto: ");
        scanf("%f", &valor);
        printf("Qual a quantidade de estoque desse produto: ");
        scanf("%d", &estoque);
        if (estoque >= 5){
            printf("\nEstoque Suficiente!\n");
            printf("Venda Realizada!\n");
            valorTotal += valor;
            vendas++;
        } else if(estoque < 5){
            printf("\nEstoque Baixo!\n");
        } else (estoque <=0){
            printf("Valor Invalido!\n");
        }
        i++;
    }
    printf("O total de vendas foi: %d", vendas);
    printf("\nO valor de todas as vendas foi: R$ %.2f\n", valorTotal);


    return 0;
}
