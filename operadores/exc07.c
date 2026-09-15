#include <studio.h>

int main(){
    float mes = 10000;
    mes += 3000; // Recebe
    mes -= 2000; // Aluguel
    mes += 1500; // Recebe
    mes -= 800; // Pagamento dos fornecedores
    float reajuste = mes * 5 / 1000;
    mes += reajuste;

    printf("Saldo do mes final: R$ %.2f",  saldo);
    return 0;
}