#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	int num;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &num);
	
	if((num%3) == 0)
	{
		if((num%5) == 0)
		{
			printf("O n�mero � divis�vel por 3 e 5!");
		}
	}
	else 
	{
		printf("O n�mero n�o � divis�vel por 3 e 5!");
	}

	system("pause");

} 
