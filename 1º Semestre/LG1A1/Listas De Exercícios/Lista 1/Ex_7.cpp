#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	int ano_nasc, ano_atual, idade, meses, dias, semanas;
	
	printf("Digite o ano de nascimento: ");
	scanf("%i", &ano_nasc);
	
	printf("Digite o ano atual: ");
	scanf("%i", &ano_atual);
	
	idade = ano_atual-ano_nasc;
	meses = idade*12;
	dias = idade*365;
	semanas = idade*52;
	
	printf("A idade é: %i \n A idade em meses é: %i \n A idade em dias é %i \n A idade em pessoas é: %i", idade, meses, dias, semanas);
	
	system("pause");


}
