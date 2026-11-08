int main()
{
    int idade, resposta;
    for (int i = 0; i <= 5; i++){
        printf("\nVocê é funcionario sim - 1 e não - 2: ");
        scanf("%d", &resposta);
        printf("Qual  sua idade: ");
        scanf("%d", &idade);
        if (resposta == 2 && idade >= 18){
            printf("Acesso Permitido!\n");
        } else{
            printf("Acesso Negado!\n");
        }
    }
}
