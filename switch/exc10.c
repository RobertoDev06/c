// Sistema de Caixa Eletronico

#include <stdio.h>

int main()
{
    float saldo = 500.00;
    float valor;
    int opcao;
    int qtdSaques = 0;
    int qtdDepositos = 0;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Saque\n");
        printf("2 - Deposito\n");
        printf("3 - Consultar saldo\n");
        printf("0 - Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);
                if (valor <= saldo){
                    saldo = saldo - valor;
                    qtdSaques++;
                    printf("Saque realizado! Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Saldo insuficiente!\n");
                }
                break;
            case 2:
                printf("Digite o valor do deposito: ");
                scanf("%f", &valor);
                if (valor > 0){
                    saldo = saldo + valor;
                    qtdDepositos++;
                    printf("Deposito realizado! Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido para deposito!\n");
                }
                break;
            case 3:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 0:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    printf("\n--- RESUMO DA SESSAO ---\n");
    printf("Quantidade de saques: %d\n", qtdSaques);
    printf("Quantidade de depositos: %d\n", qtdDepositos);

    return 0;
}