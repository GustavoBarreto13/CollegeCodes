#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	
	if (num % 3 == 0 || num % 5 == 0){
		if (num % 3 == 0 && num % 5 == 0){
			printf("O número é múltiplo de 3 e de 5\n");	
		}
		else if (num % 3 == 0){
			printf("O número é múltiplo de 3\n");
		}
		else if (num % 5 == 0){
			printf("O número é múltiplo de 5\n");
		}
	}
	else
		printf("O número não é múltiplo de 3 nem de 5\n");
	
	system("pause");
	
	
}

