#include <stdio.h>

int main() 
{
    int A, B, C;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    C = (A - B) * (A - B);

    printf("O quadrado da diferença do primeiro valor (variável A) em relação ao segundo valor (variável B): %d", C);

    return 0;
}