#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAX 10

float num[MAX];

void lerNum()
{
	int i;
	for(i=0; i<MAX; i++)
	{
		printf("\nDigita um número...: ");
		scanf("%f", &num[i]);
				
	}

}	

void ShowNum(){
	int i;
	for(i=0; i<MAX; i++){
		printf("%.f \n", num[i]);
	}

}


int main()
{
	setlocale(LC_ALL, "Portuguese"); 
	
	lerNum();
	ShowNum();

	

}