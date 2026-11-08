int main()
{
    char nome[50];
    int QuantidadeVendas = 0;
    float valor, TotalVendas = 0;


    for(int vendas = 0; vendas < 5; vendas++){
        printf("Qual o nome do produto: ");
        scanf("%49s", nome);
        printf("Qual o valor do produto: ");
        scanf("%f", valor);
        if (valor <= 0) {
            printf("Não aceitamos valores menores ou iguais a zero!");
        } else if (valor >= 500) {
            printf("\nMeta Atingida!");
        } else {
            printf("\nMeta não Atingida!");
    }
        TotalVendas += valor;
        QuantidadeVendas++;


    }
    printf("\nA quantidades de vendas foi: %d", QuantidadeVendas);
    printf("\nO total de todas as vendas foi: %.2f", TotalVendas);




    return 0;
}
