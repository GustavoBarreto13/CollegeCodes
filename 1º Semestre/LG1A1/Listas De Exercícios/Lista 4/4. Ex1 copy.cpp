#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	int x;
	
	for(x=0; x<=1000; x++){
		if(x%2 == 0)
		printf("%i \n", x);
	}
	
	
}