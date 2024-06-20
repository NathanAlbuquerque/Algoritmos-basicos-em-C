#include <stdio.h>

int main() {
  printf("r) Elaborar um programa que leia valores positivos inteiros até que um valor negativo seja informado. Ao final devem ser apresentados o maior e o menor valores informados pelo usuário.\n");
  int numero, maior = 0, menor = __INT_MAX__;
  do {
    printf("Digite um número inteiro positivo (ou um negativo para parar): ");
    scanf("%d", &numero);
    if (numero >= 0) {
      if (numero > maior) {
        maior = numero;
      }
      if (numero < menor) {
        menor = numero;
      }
    }
  } while (numero >= 0);
  printf("Maior valor informado: %d\n", maior);
  printf("Menor valor informado: %d\n", menor);
  return 0;
}