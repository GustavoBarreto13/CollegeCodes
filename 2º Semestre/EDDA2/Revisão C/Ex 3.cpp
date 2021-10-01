#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	
	if (num % 3 == 0 || num % 7 == 0){
		if (num % 7 == 0 && num % 3 == 0){
			printf("O número é divisível por 7 e por 3\n");	
		}
		else if (num % 7 == 0){
			printf("O número é divisível por 7\n");
		}
		else if (num % 3 == 0){
			printf("O número é divisível por 3\n");
		}
	}
	else
		printf("O número não é divisível por 3 nem por 7\n");
	
	system("pause");
	
	
}

