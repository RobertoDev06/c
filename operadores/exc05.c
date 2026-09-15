#include <studio.h>

int main(){
    float salario = 2500;
    float aumento;

    aumento = salario * 10 / 100;
    salario += aumento;

    printf("Salario antigo: R$ 2500\n");
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Salario novo: R$ %.2f\n", salario);

    return 0;
}