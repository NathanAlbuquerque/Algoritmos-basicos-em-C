#include <stdio.h>
#include <math.h>

int main() 
{
    int A, B;
    float C;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    C = pow(A, (1 / B));

    printf("O valor de A elevado a 1/B: %.2f", C);

    return 0;
}