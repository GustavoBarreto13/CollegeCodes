#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	int b, e, result;
	
	printf("Digite a Base: \n");
	scanf("%i", &b);
	
	printf("Digite o expoente: ");
	scanf("%i", &e);
	
	result = pow(b,e);
	
	printf("O c�lculo � %i \n", result);
	
	
	system("pause");

}
