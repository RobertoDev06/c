#include <stdio.h>


int main()
{
    int opcao = 0;
    float saldo, valor;

    printf("Digite o saldo inicial da empresa: R$ ");
    scanf("%f", &saldo);
    while (opcao != 3) {
        printf("\n=== CONTROLE FINANCEIRO ===\n");
        printf("1 - Registrar entrada\n");
        printf("2 - Registrar despesa\n");
        printf("3 - Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        if (opcao == 1) {
            printf("Digite o valor da entrada: R$ ");
            scanf("%f", &valor);
            if (valor <= 0) {
                printf("Valor invalido!\n");
            } else {
                saldo = saldo + valor;
                printf("Entrada registrada!\n");
            }
        } else if (opcao == 2) {
            printf("Digite o valor da despesa: R$ ");
            scanf("%f", &valor);
            if (valor <= 0) {
                printf("Valor invalido!\n");
            } else if (valor > saldo) {
                printf("Saldo insuficiente!\n");
            } else {
                saldo = saldo - valor;
                printf("Despesa registrada!\n");
            }
        } else if (opcao == 3) {
            printf("\nEncerrando o sistema...\n");
        } else {
            printf("Opcao invalida!\n");
        }
        printf("Saldo atual: R$ %.2f\n", saldo);
    }
    printf("\nSaldo final da empresa: R$ %.2f\n", saldo);

    return 0;
}


