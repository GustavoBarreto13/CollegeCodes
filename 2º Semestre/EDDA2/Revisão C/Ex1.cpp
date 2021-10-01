#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	
	if(num % 2 == 0){
		printf("O número é par!\n");
	}
	else 
		printf("O número é ímpar!\n");
	
	system("pause");
	
}

