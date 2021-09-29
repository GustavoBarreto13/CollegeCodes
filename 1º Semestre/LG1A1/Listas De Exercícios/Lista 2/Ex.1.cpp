#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	
	if((num%3) == 0)
	{
		if((num%5) == 0)
		{
			printf("O número é divisível por 3 e 5!");
		}
	}
	else 
	{
		printf("O número não é divisível por 3 e 5!");
	}

	system("pause");

} 
