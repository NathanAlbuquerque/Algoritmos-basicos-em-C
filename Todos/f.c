#include <stdio.h>

int main() 
{
    int A, B, C;

 	printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    C = A;
    A = B;
    B = C;    

    printf("O valor de A: %d", A);
    printf("\n");
    printf("O valor de B: %d", B);

    return 0;
}