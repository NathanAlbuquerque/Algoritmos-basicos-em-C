#include <stdio.h>

int main() {
  printf("p) Elaborar um programa que apresente os resultados da soma e da média aritmética dos valores pares situados na faixa numérica de 50 até 70.\n");
  int soma = 0, contador = 0;
  for (int i = 50; i <= 70; i += 2) {
    soma += i;
    contador++;
  }
  float media = (float)soma / contador;
  printf("Soma dos valores pares: %d\n", soma);
  printf("Média aritmética dos valores pares: %.2f\n", media);
  return 0;
}