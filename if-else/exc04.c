#include <stdio.h>

int main(){
    float venda, comissao, total;

    printf("Qual foi o valor da sua venda: ");
    scanf("%f", venda);
    if venda > 500{
        comissao = 0.10;
        total = venda + (venda * comissao);
        printf("O total da sua comisao foi de: %2.f", total);
    } else {
        comissao = 0.5;
        total = venda - (venda * comissao);
        printf("O total da sua comisao foi de: %2.f", total);
    }

}