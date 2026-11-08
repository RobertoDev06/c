int main()
{
    char nome[50];
    int horas, excedidos = 0;
    float valorHora, pagamento, totalPago = 0;

    printf("Qual o valor da hora extra: R$ ");
    scanf("%f", &valorHora);

    for (int i = 1; i <= 5; i++) {

        printf("\n===== FUNCIONARIO %d =====\n", i);
        printf("Nome do funcionario: ");
        scanf("%49s", nome);
        printf("Quantidade de horas extras: ");
        scanf("%d", &horas);

        if (horas < 0) {
            printf("Quantidade de horas invalida!\n");
        }
        else if (horas > 20) {
            pagamento = horas * valorHora;
            totalPago += pagamento;
            excedidos++;
            printf("Limite excedido!\n");
            printf("Pagamento: R$ %.2f\n", pagamento);
        }
        else if (horas >= 0 && horas <= 20) {
            pagamento = horas * valorHora;
            totalPago += pagamento;

            printf("Dentro do limite.\n");
            printf("Pagamento: R$ %.2f\n", pagamento);
        }
    }

    printf("\n===== RELATORIO FINAL =====\n");
    printf("Total pago pela empresa: R$ %.2f\n", totalPago);
    printf("Funcionarios que excederam o limite: %d\n", excedidos);

    return 0;
}
