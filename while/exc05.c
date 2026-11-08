int main()
{
    int i;
    float venda, totalVenda, meta ;
    printf("Qual o valor da sua venda: ");
    scanf("%f", &venda);
    totalVenda = 0;
    meta = 5000;
    i = 0;
    while(totalVenda < meta){
        printf("Qual o valor da sua venda: ");
        scanf("%f", &venda);
        totalVenda += venda;
        i++;
    }
    printf("\nO total de vendas para bater a meta: %d", i);


    return 0;
}
