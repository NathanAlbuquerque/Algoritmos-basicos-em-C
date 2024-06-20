#include <stdio.h>
#include <math.h>

int main() 
{
    int A, B, C;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    C = pow(A, B);

    printf("O valor de A elevado a B: %d", C);

    return 0;
}