//* @sobre  Exercicio 05 da aula 0 de programação estruturada
//* @author  Pedro Henrique RU: 5194697

//* 5. Crie um programa em C que peça ao usuário que insira a base e a altura de
// um triângulo (números de ponto flutuante), e depois calcule e imprima a área
// desse triângulo.

#include <stdio.h>


int main() {

	
  float base, altura, area;

  printf("Digite a base do triangulo: ");
  scanf("%f", &base);

  printf("Digite a altura do triangulo: ");
  scanf("%f", &altura);

  area = (base * altura) / 2;
  printf("A area do triangulo: %.2f\n", area);

  return 0;
}
