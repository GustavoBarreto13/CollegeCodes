#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	int numero, dobro, quadrado;
	
	printf("Escreva um n�mero: \n");
	scanf("%i", &numero);
	
	dobro = (numero*2);
	quadrado = numero*numero;
	printf("O dobro de %i � %i, e o quadrado � %i!", numero, dobro, quadrado);
	
	system("pause");

}
