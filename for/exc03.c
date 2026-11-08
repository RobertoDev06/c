int main()
{
    float sal, inss;
    for (int i = 0; i <= 10; i++){
        printf("Qual o seu salario: ");
        scanf("%f", &sal);
        inss = sal - (sal * 0.11);
        printf("O salario total:  %2.f\n", inss);
    }
    return 0;
}
