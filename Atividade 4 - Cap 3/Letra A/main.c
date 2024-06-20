#include <stdio.h>

int main() 
{
    int c;
    float f;

    printf("Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é F ← C * 9 / 5 + 32, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.\n\n");
 
 	printf("Informe a temperatura em Celsius: ");
    scanf("%d", &c);
    
    f = c * 9 / 5 + 32;
    
    printf("/n");
    printf("Convertendo a temperatura em Fahrenheit fica: %.2f", f);
 
    return 0;
}