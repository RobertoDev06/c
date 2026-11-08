int main()
{
    int dias, diasVindo = 0, diasFalta = 0;
    for (int i = 0; i <= 30; i++){
        printf("\nVeio hj sim '1', nao '0': ");
        scanf("%d", &dias);
        if(dias == 1){
            diasVindo++;
        }else{
            diasFalta++;
           
        }
    }
    if (diasFalta > 3) {
        printf("Desconto no salario!\n");
    }
    printf("Total de dias vindo: %d\n", diasVindo);
    printf("Total de dias faltando: %d\n", diasFalta);
    return 0;
}
