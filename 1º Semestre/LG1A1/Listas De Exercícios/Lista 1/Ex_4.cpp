#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	int c, f;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%i", &c);
	
	f = ((c*1.8)+32);
	
	printf("A convers�o para Fahrenheit � %i!", f);
	
	system("pause");

}
