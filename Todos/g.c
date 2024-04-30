#include <stdio.h>

int main() 
{
    int A, B, C, D;
    int SOMA1, SOMA2, SOMA3, SOMA4, SOMA5, SOMA6;
    int MULT1, MULT2, MULT3, MULT4, MULT5, MULT6;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    
    printf("Informe o valor de B: ");
    scanf("%d", &B);

    printf("Informe o valor de C: ");
    scanf("%d", &C);
    
    printf("Informe o valor de D: ");
    scanf("%d", &D);

    SOMA1 = A + B;
    SOMA2 = A + C;
    SOMA3 = A + D;
    SOMA4 = B + C;
    SOMA5 = B + D;
    SOMA6 = C + D;

    MULT1 = A * B;
    MULT2 = A * C;
    MULT3 = A * D;
    MULT4 = B * C;
    MULT5 = B * D;
    MULT6 = C * D;

    printf("A soma de A por B: %d", SOMA1);
    printf("\n");
    printf("A soma de A por C: %d", SOMA2);
    printf("\n");
    printf("A soma de A por D: %d", SOMA3);
    printf("\n");
    printf("A soma de B por C: %d", SOMA4);
    printf("\n");
    printf("A soma de B por D: %d", SOMA5);
    printf("\n");
    printf("A soma de C por D: %d", SOMA6);

    printf("A multiplicacao de A por B: %d", MULT1);
    printf("\n");
    printf("A multiplicacao de A por C: %d", MULT2);
    printf("\n");
    printf("A multiplicacao de A por D: %d", MULT3);
    printf("\n");
    printf("A multiplicacao de B por C: %d", MULT4);
    printf("\n");
    printf("A multiplicacao de B por D: %d", MULT5);
    printf("\n");
    printf("A multiplicacao de C por D: %d", MULT6);

    return 0;
}