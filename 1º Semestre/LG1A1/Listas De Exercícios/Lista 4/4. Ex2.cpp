#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	int x, y;
	
	for(x=15; x<=200; x++){
		y = x*x;
		printf("%i \n", y);
	}
	
	
	
}