int main()
{
    float preco, novoP;
    for (int i= 1; i <= 5; i++){
        printf("Qual o preço do seu produto: ");
        scanf("%f", &preco);
        novoP = preco + (preco * 0.08);
        printf("Novo preço com aumento: %2.f\n", novoP);
    }
    return 0;
}
