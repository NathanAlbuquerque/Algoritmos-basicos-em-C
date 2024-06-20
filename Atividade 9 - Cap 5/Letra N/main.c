#include <stdio.h>

int main() {
  printf("n) Elaborar um programa que leia sucessivamente valores numéricos e apresente no final o somatório, a média e o total de valores lidos. O programa deve ler os valores enquanto o usuário estiver fornecendo valores positivos. Ou seja, o programa deve parar quando o usuário fornecer um valor negativo (menor que zero).\n");
  float valor, somatorio = 0;
  int contador = 0;

  printf("Digite os valores (número negativo para parar):\n");

  do {
    scanf("%f", &valor);

    if (valor >= 0) {
      somatorio += valor;
      contador++;
    }
  } while (valor >= 0);

  float media = contador > 0 ? somatorio / contador : 0;

  printf("Total de valores lidos: %d\n", contador);
  printf("Somatório dos valores: %.2f\n", somatorio);
  printf("Média dos valores: %.2f\n", media);

  return 0;
}