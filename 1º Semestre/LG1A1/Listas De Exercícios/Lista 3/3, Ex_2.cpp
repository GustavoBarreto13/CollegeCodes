#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	
	float horas, valorHora, sal;
	
	printf("Digite o n�mero de horas trabalhadas: ");
	scanf("%f", &horas);

	printf("Digite o valor da hora: ");
	scanf("%f", &valorHora);
	
	sal = (horas*valorHora);

	if(sal < 1500){
		printf("O valor da gratifica��o � R$300,00 \n");
	}
	else
		printf("O valor da gratifica��o � R$500,00 \n");

	
	system("pause");
}
