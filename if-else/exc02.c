#include <stdio.h>

int main(){
    int estoque = 3000;
    int retirada = 1000;
    int total = estoque - retirada;
    estoque = total;

    if estoque <= 1500{
        printf("O seu estoque ainda possui produtos suficiente para venda");
    } else{
        printf("Estoque abaixo da quantidade nescessaria para venda");
    }
}