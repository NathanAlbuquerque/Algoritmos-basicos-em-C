#include <stdio.h>

int main() 
{
    int A, B, C, RESULTADO;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    
    printf("Informe o valor de B: ");
    scanf("%d", &B);

    printf("Informe o valor de C: ");
    scanf("%d", &C);
    
    RESULTADO = A * A + B * B + C * C;

    printf("O resultado da soma dos quadrados de A, B e C: %d", RESULTADO);

    return 0;
}