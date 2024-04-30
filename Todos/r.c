#include <stdio.h>

int main() 
{
    float A, B, C, NULOS, BRANCOS, TOTAL, VALIDOS;
    float PERCENT_VALID, PERCENT_A, PERCENT_B, PERCENT_C, PERCENT_NULOS, PERCENT_BRANCOS;

    printf("Informe a quantidade de votos validos para o candidato A: ");
    scanf("%f", &A);

    printf("Informe a quantidade de votos validos para o candidato B: ");
    scanf("%f", &B);

    printf("Informe a quantidade de votos validos para o candidato C: ");
    scanf("%f", &C);

    printf("Informe a quantidade de votos nulos: ");
    scanf("%f", &NULOS);

    printf("Informe a quantidade de votos brancos: ");
    scanf("%f", &BRANCOS);

    TOTAL = A + B + C + NULOS + BRANCOS;
    VALIDOS = A + B + C;
    PERCENT_VALID = VALIDOS / TOTAL * 100;
    PERCENT_A = A / TOTAL * 100;
    PERCENT_B = B / TOTAL * 100;
    PERCENT_C = C / TOTAL * 100;
    PERCENT_NULOS = NULOS / TOTAL * 100;
    PERCENT_BRANCOS = BRANCOS / TOTAL * 100;

    printf("O total de eleitores: %.0f", TOTAL);
    printf("\n");
    printf("O total de volos validos: %.0f", VALIDOS);
    printf("\n");
    printf("O total de volos nulos: %.0f", NULOS);
    printf("\n");
    printf("O total de volos bracos: %.0f", BRANCOS);
    printf("\n");
    printf("O percentual correspondente de votos válidos em relação à quantidade de eleitores: %.2f%%", PERCENT_VALID);
    printf("\n");
    printf("O percentual correspondente de votos válidos do candidato A: %.2f%%", PERCENT_A);
    printf("\n");
    printf("O percentual correspondente de votos válidos do candidato B: %.2f%%", PERCENT_B);
    printf("\n");
    printf("O percentual correspondente de votos válidos do candidato C: %.2f%%", PERCENT_C);
    printf("\n");
    printf("O percentual correspondente de votos nulos: %.2f%%", PERCENT_NULOS);
    printf("\n");
    printf("O percentual correspondente de votos brancos: %.2f%%", PERCENT_BRANCOS);

    return 0;
}