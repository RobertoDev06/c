int main() {
    char nome[50];
    int idade;
    int contador;
    int elegiveis = 0;
    float salario;


    for (contador = 0; contador < 5; contador++) {
        printf("\n--- Cadastro do funcionario %d ---\n", contador + 1);


        printf("Qual o seu nome: ");
        scanf("%49s", nome);


        printf("Qual a sua idade: ");
        scanf("%d", &idade);


        printf("Qual o seu salario: ");
        scanf("%f", &salario);


        if (idade >= 18 && salario < 3000) {
            printf("Elegivel ao beneficio\n");
            elegiveis++;
        } else {
            printf("Nao elegivel ao beneficio\n");
        }
    }


    printf("\nTotal de funcionarios elegiveis: %d\n", elegiveis);


    return 0;
}
