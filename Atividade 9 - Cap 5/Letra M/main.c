#include <stdio.h>

int main() {
  printf("m) Elaborar um programa que leia dez valores numéricos reais e apresente no final o somatório e a média dos valores lidos.\n");
  float valor, somatorio = 0;

  for (int i = 1; i <= 10; i++) {
    printf("Digite o %dº valor: ", i);
    scanf("%f", &valor);
    somatorio += valor;
  }

  float media = somatorio / 10;

  printf("Somatório dos valores: %.2f\n", somatorio);
  printf("Média dos valores: %.2f\n", media);
  return 0;
}