int main()
{
    int estoque, vendido;
    printf("Digite a quantidade de produtos em estoque: ");
    scanf("%d", &estoque);


    while (estoque > 0) {
        printf("Digite a quantidade vendida: ");
        scanf("%d", &vendido);
        if (vendido > estoque) {
            printf("Estoque insuficiente!\n");
        } else {
            estoque = estoque - vendido;
            printf("Estoque atual: %d\n", estoque);
        }
    }
    printf("Estoque zerado!\n");
    return 0;
}
