//* @sobre  Exercicio 10 da aula 0 de programa��o estruturada
//* @author  Pedro Henrique RU: 5194697
//* Crie um programa que declare uma vari�vel global e uma fun��o. A fun��o deve modificar o valor da vari�vel global para o valor informado pelo usu�rio e o programa principal deve imprimir este valor. 

#include <stdio.h>

int global = 0;

  void modificarGlobal()
{
  printf("O valor da variavel global eh: %d\n\n", global);		
	
  printf("Digite um valor para a variavel global: ");
  scanf("%d", &global);
}

int main()
{
  modificarGlobal();
  printf("O valor da variavel global eh: %d\n", global);
  return 0;
}
