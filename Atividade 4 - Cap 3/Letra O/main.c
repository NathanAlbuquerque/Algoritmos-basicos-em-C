#include <stdio.h>

int main() 
{
    int A, B, C, D, P, S;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    
    printf("Informe o valor de B: ");
    scanf("%d", &B);

    printf("Informe o valor de C: ");
    scanf("%d", &C);

    printf("Informe o valor de D: ");
    scanf("%d", &D);

    P = A * C;
    S = B + D;
    
    printf("O resultado do produto: %d", P);
    printf("\n");
    printf("O resultado da soma: %d", S);

    return 0;
}