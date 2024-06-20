#include <stdio.h>

int main() 
{
    int A, B;
    float C;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    
    printf("Informe o valor de B: ");
    scanf("%d", &B);

    C = (A / B) * (A / B);

    printf("O resultado do quadrado da divisão de A em relação a B: %.2f", C);

    return 0;
}