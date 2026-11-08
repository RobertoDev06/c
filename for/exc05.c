int main()
{
    float valor, parcela, saldo, juros;
    int parcelas;


    printf("Digite o valor da venda: ");
    scanf("%f", &valor);


    printf("Digite o numero de parcelas (max. 12): ");
    scanf("%d", &parcelas);


    if (parcelas > 0 && parcelas <= 12) {


        if (parcelas > 6) {
            juros = valor * 0.02;
            valor = valor + juros;
        }


        parcela = valor / parcelas;
        saldo = valor;


        for (int i = 1; i <= parcelas; i++) {
            saldo = saldo - parcela;


            printf("Parcela %d: R$ %.2f\n", i, parcela);
            printf("Saldo restante: R$ %.2f\n", saldo);
        }


    } else {
        printf("Numero de parcelas invalido!\n");
    }


    return 0;
}
