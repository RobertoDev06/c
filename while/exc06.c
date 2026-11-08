int main()
{
    float venda, vendasT;
    int i = 0;
    while (i <= 5){
        printf("Qual o valor da sua compra: ");
        scanf("%f", &venda);
        vendasT += venda;
        i++;
    }
    printf("\nO de todas as vendas: %.2f", vendasT);
}
