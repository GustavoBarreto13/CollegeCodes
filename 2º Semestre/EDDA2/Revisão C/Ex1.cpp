#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	
	int num;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &num);
	
	if(num % 2 == 0){
		printf("O n�mero � par!\n");
	}
	else 
		printf("O n�mero � �mpar!\n");
	
	system("pause");
	
}

