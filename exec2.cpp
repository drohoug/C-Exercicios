//* @sobre  Exercicio 02 da aula 0 de programa��o estruturada
//* @author  Pedro Henrique RU: 5194697

#include <stdio.h>
#include <locale.h>



int main() {

setlocale(LC_ALL, "Portuguese");

char c; 

printf("Digite um caractere: ");

scanf("%c", &c);

printf("O c�digo ASCII do caractere %c � %d.\n", c, c); 
return 0;
}
	
