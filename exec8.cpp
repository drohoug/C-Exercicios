//* @sobre  Exercicio 08 da aula 0 de programação estruturada
//* @author  Pedro Henrique RU: 5194697

//* Crie uma função que recebe dois números inteiros e retorna a soma deles. Utilize essa função em seu programa principal. *\\ 

#include <stdio.h>

int somar(int numero1, int numero2)
{
	int resultado = numero1 + numero2;
	
	return resultado;
}

int main()
{
	int numero1;
	int numero2;

	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);	
	

	int resultado = somar(numero1, numero2);
 	printf("Soma dos dois numeros = %.2i\n", resultado);
	
	return 0;
}
