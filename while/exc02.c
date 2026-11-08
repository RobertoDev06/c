int main()
{
    int i, funcinarios;
    float sal, med, totalSal;


    prinf("Quantos funcionarios sua empresa tem: ");
    scanf("%d", &funcinarios);
    while (funcinarios >= 0){
        printf("Qual o seu salario: ");
        scanf("%f", sal);
        totalSal += sal;
        i ++;
    }


    med = totalSal / i;
    printf("O total de todos os salarios foi: %.2f\n", total);
    printf("A media dos salarios foi: %.2f\n", media);


    return 0;
}
