int main()
{
    int tentivas, senha;
    tentivas = 0;
    while (senha != 1245 && tentivas < 3){
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentivas++;
        if (senha == 1245){
            printf("Senha correto!\n");
        } else{
            printf("Senha Incorreta\n");
        }


        if(tentivas == 0){
            printf("Já atingiu o maximo de tentativas!");
        }
    }


    return 0;
}
