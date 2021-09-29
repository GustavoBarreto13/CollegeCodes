#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	float sal, novo_sal;
	
	printf("Digite o salário: ");
	scanf("%f", &sal);
	
	novo_sal = sal + (sal*0.25);
	
	printf("Seu novo salário é R$%f!", novo_sal);
	
	system("pause");


}
