int main()
{
    float venda;
    for (int i = 0; i <= 5; i++){
        printf("Qual foi o valor da venda: ");
        scanf("%f", &venda);
        if (venda > 1000){
            printf("\nMeta batida");
        }
    }
}
