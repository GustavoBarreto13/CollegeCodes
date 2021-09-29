#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	int mes;
	
	printf("Digite o número do mês: ");
	scanf("%i", &mes);
	
	if(mes == 1){
		printf("01 - Janeiro");
	}
		if(mes == 2){
			printf("02 - Fevereiro");
		}
			if(mes == 3){
				printf("03 - Março");
			}
				if(mes == 4 ){
					printf("04 - Abril");
				}
					if(mes == 5 ){
						printf("05 - Maio");
					}
						if(mes == 6 ){
							printf("06 - Junho");
						}
							if(mes == 7){
								printf("07 - Julho");
							}
								if(mes == 8){
									printf("08 - Agosto");
								}
									if(mes == 9){
										printf("09 - Setembro");
									}
										if(mes == 10){
											printf("10 - Outubro");
										}
											if(mes == 11){
												printf("11 - Novembro");
											}
												if(mes == 12){
												printf("12 - Dezembro");
											}
											 
												
	system("pause");

} 
