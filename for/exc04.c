#include <stdio.h>

int main()
{
    float nota, media, n = 0;
    int aprovados = 0, reprovados = 0;

    for (int i = 0; i < 8; i++) {
        printf("Qual a nota: ");
        scanf("%f", &nota);

        if (nota >= 7 && nota <= 10) {
            printf("Aprovado\n");
            aprovados++;
        }
        else {
            printf("Reprovado\n");
            reprovados++;
        }

        n += nota;
    }

    media = n / 8;

    printf("\n===== RESULTADO FINAL =====\n");
    printf("Total de aprovados: %d\n", aprovados);
    printf("Total de reprovados: %d\n", reprovados);
    printf("Media das notas: %.2f\n", media);

    return 0;
}