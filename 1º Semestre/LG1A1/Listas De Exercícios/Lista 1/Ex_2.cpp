#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	int numero, dobro, quadrado;
	
	printf("Escreva um número: \n");
	scanf("%i", &numero);
	
	dobro = (numero*2);
	quadrado = numero*numero;
	printf("O dobro de %i é %i, e o quadrado é %i!", numero, dobro, quadrado);
	
	system("pause");

}
