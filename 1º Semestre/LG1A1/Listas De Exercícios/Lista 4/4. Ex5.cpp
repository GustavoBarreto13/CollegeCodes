#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	int b, e, p;
	
	printf("Escreva a base do número: ");
	scanf("%i", &b);

	printf("Escreva o expoente do número: ");
	scanf("%i", &e);

	p = pow(b,e);
	
	printf("O resultado é %i", p);

}
	
	
	
