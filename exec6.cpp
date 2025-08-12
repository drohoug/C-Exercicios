//* @sobre  Exercicio 06 da aula 0 de programação estruturada
//* @author  Pedro Henrique RU: 5194697

//Crie um programa em C que peça ao usuário que insira três números inteiros, calcule a média como um número de ponto flutuante e imprima o resultado. \\

#include <stdio.h>

int main() 
{
  int num1, num2, num3;
  float media;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  
  printf("Digite o terceiro numero: ");
  scanf("%d", &num3);
  

  media = (num1 + num2 + num3) / 3.0;
  printf("A media dos numeros digitados e: %.2f\n", media);

  return 0;

}
