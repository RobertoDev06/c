#include <studio.h>

int main(){
    float comissao = 1200;
    float divisao = 1200 / 4;
    printf("A comissão entre 4 pessoas foi de: %f", divisao);

    divisao -= 50;
    printf("Houve um reajuste na divisao dos valores: %f", divisao);

    return 0;
}