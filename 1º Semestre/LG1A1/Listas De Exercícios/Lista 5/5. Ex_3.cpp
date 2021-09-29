
#include <conio.h>    // s?o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAX 5


int num[MAX];

void lerNum()
{
	int i;
	for(i=0; i<MAX; i++)
	{
		printf("\nDigita um número...: ");
		scanf("%i", &num[i]);
				
	}

}	

void ShowNumInverso(){
	int i;
	for(i=MAX; i>=0; i--){
		printf("%.i ", num[i]);
	}

}

void ShowNumPar(){
	int i;
	for(i=0; i<MAX; i++){
		if (num[i]%2 == 0)
		{
			printf("%.i ", num[i]);
		}
		
	}

}

void ShowNumImpar(){
	int i;
	for(i=0; i<MAX; i++){
		if (num[i]%2 == 1)
		{
			printf("%.i ", num[i]);
		}
		
	}

}

void ShowNumMedia(){
	int i;
	float soma = 0, media;

	for(i=0; i<MAX; i++){
		soma = soma + num[i];		
	}

	media = soma / MAX;

	printf("A média é: %.1f", media);

}

void ShowNumMaior(){
	int i, maior, PosMaior;
	PosMaior= 0;
	maior = num[0];
	for (i=0; i < MAX; i++){
		if(num[i] > maior){

			maior = num[i];
			PosMaior = i+1;
		}
	}
	
	printf("O maior valor é %i e a posição é %i", maior, PosMaior);

}

void ShowNumMenor(){
	int i, menor, PosMenor;
	PosMenor= 0;
	menor = num[0];
	for (i=0; i < MAX; i++){
		if(num[i] < menor){

			menor = num[i];
			PosMenor = i+1;
		}
	}
	
	printf("O menor valor é %i e a posição é %i", menor, PosMenor);

}


int main()
{
	setlocale(LC_ALL, "Portuguese"); 
	
	lerNum();
	ShowNumMenor();
}
