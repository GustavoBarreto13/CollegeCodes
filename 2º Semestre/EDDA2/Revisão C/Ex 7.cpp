#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	
	int num[3], maior, menor;
	
	for (int i = 0; i < 3; i++){
		printf("Digite um n�mero inteiro: ");
		scanf("%i", &num[i]);
	}
	
	maior = num[0];
	menor = num[0];
	
	for (int i = 0; i < 3; i++){
		if (num[i] > maior){
			maior = num[i];
		}
	}
	
	for (int i = 0; i < 3; i++){
		if (num[i] < menor){
			menor = num[i];
		}
	}
	
	printf("O maior n�mero � %i e o menor � %i \n", maior, menor);
	
	system("pause");
	
	
}
