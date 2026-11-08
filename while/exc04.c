int main()
{
    float valor, soma;
    prinf("Qual o valor da sua compra: ");
    scanf("%f", &valor);
    while (valor != 0){
        prinf("Qual o valor da sua compra: ");
        scanf("%f", &valor);
        soma += valor;
        if (soma > 1000){
            printf("CLIENTE VIP");
        }
    }


    return 0;
}
