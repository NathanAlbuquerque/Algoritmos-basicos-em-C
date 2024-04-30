#include <stdio.h>

int main() 
{
    float COMPRIMENTO, LARGURA, ALTURA, VOLUME;

 	printf("Informe o COMPRIMENTO da caixa: ");
    scanf("%f", &COMPRIMENTO);

    printf("Informe o LARGURA da caixa: ");
    scanf("%f", &LARGURA);

    printf("Informe o ALTURA da caixa: ");
    scanf("%f", &ALTURA);

    VOLUME = COMPRIMENTO * LARGURA * ALTURA;

    printf("O volume da de B: %f", VOLUME);

    return 0;
}