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
	
	for(int i = 0; i < 2; i++){
	
	printf("Digite o %iº dia: ", i+1);
	scanf("%i", &entrada[i].dia);
	
	printf("Digite o %iº mês: ", i+1);
	scanf("%i", &entrada[i].mes);
		
	printf("Digite o %iº ano: ", i+1);
	scanf("%i", &entrada[i].ano);
	}
	
	if(entrada[0].ano < entrada[1].ano){
		printf("A data %i/%i/%i veio primeiro ", entrada[0].dia, entrada[0].mes, entrada[0].ano);
	}
	else if (entrada[0].ano > entrada[1].ano){
		printf("A data %i/%i/%i veio primeiro ", entrada[1].dia, entrada[1].mes, entrada[1].ano);
	}
	else
		if(entrada[0].mes < entrada[1].mes){
		printf("A data %i/%i/%i veio primeiro ", entrada[0].dia, entrada[0].mes, entrada[0].ano);
		}
		else if (entrada[0].mes > entrada[1].mes){
		printf("A data %i/%i/%i veio primeiro ", entrada[1].dia, entrada[1].mes, entrada[1].ano);
		}
		else
			if(entrada[0].dia < entrada[1].dia){
			printf("A data %i/%i/%i veio primeiro ", entrada[0].dia, entrada[0].mes, entrada[0].ano);
			}
			else if (entrada[0].dia > entrada[1].dia){
			printf("A data %i/%i/%i veio primeiro ", entrada[1].dia, entrada[1].mes, entrada[1].ano);
			}		
	
	system("pause");
	
	
}

