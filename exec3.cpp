//* @sobre  Exercicio 03 da aula 0 de programação estruturada
//* @author  Pedro Henrique RU: 5194697
// Crie um programa em C que peça ao usuário que insira dois números inteiros e imprima a soma, a diferença, o produto e o quociente. \\

#include <stdio.h>

int main()
{

  int num1, num2, soma, diferenca, produto, quociente;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  
  soma = num1 + num2;
  diferenca = num1 - num2;
  produto = num1 * num2;
  quociente = num1 / num2;
  
  printf("Soma: %d\n", soma);
  printf("Diferenca: %d\n", diferenca);
  printf("Produto: %d\n", produto);
  printf("Quociente: %d\n", quociente); 
  
  return 0;

}

