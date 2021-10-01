#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


typedef struct {
    int dia, mes, ano;
}data;
	

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	
	data entrada[2];
	
	printf("Digite o dia da data de validade: ");
	scanf("%i", &entrada[0].dia);
	
	printf("Digite o mês da data de validade: ");
	scanf("%i", &entrada[0].mes);
		
	printf("Digite o ano da data de validade: ");
	scanf("%i", &entrada[0].ano);
	
	printf("Digite o dia atual: ");
	scanf("%i", &entrada[1].dia);
	
	printf("Digite o mês atual: ");
	scanf("%i", &entrada[1].mes);
		
	printf("Digite o ano atual: ");
	scanf("%i", &entrada[1].ano);
	
		
	if(entrada[0].ano < entrada[1].ano){
		printf("O produto não está vencido");
	}
	else if (entrada[0].ano > entrada[1].ano){
		printf("O produto está vencido");
		}
	else
		if(entrada[0].mes < entrada[1].mes){
		printf("O produto não está vencido");
		}
		else if (entrada[0].mes > entrada[1].mes){
		printf("O produto está vencido");
		}
		else
			if(entrada[0].dia < entrada[1].dia){
			printf("O produto não está vencido");
			}
			else if (entrada[0].dia > entrada[1].dia){
			printf("O produto está vencido");
			}		
	
	system("pause");
	
	
}

