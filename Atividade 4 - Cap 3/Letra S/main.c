#include <stdio.h>

int main() 
{
    int A, B, SOMA, SUBTRACAO, MULTIPLICACAO;
    float DIVISAO;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);
    
    SOMA = A + B;
    SUBTRACAO = A - B;
    MULTIPLICACAO = A * B;
    DIVISAO = (float)A / B;

    printf("A soma de A e B: %d", SOMA);
    printf("\n");
    printf("A subtracao de A e B: %d", SUBTRACAO);
    printf("\n");
    printf("A multiplicacao de A e B: %d", MULTIPLICACAO);
    printf("\n");
    printf("A divisao de A e B: %.2f", DIVISAO);

    return 0;
}