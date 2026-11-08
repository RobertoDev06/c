int main()
{
    int escolha;
    float venda, totalV;
    printf("Qual a sua escolha 0 ou 1: ");
    scanf("%f", &escolha);
    while (escolha != 0){
        printf("Qual o valor da venda: ");
        scanf("%f", &venda);
        totalV += venda;
        printf("Qual a sua escolha 0 ou 1: ");
        scanf("%f", &escolha);
    }
    printf("\nO total das vendas foi: %2.f", totalV);
}
