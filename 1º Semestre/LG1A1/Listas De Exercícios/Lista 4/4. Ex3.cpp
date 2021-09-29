#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	int x, y, r;
	
	printf("Escreva a tabuada a ser exibida: ");
	scanf("%i", &y);

	for(x=0; x<=9; x++){
		r = y*x;
		printf("%i \n", r);
	}
	
	
	
}