#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	int num1, num2, num3, num4, maior, desc, soma;

	printf("Digite o primeiro número inteiro: ");
	scanf("%i", &num1);
	
	printf("Digite o segundo número inteiro: ");
	scanf("%i", &num2);
	
	printf("Digite o terceiro número inteiro: ");
	scanf("%i", &num3);
	
	printf("Digite o quarto número inteiro: ");
	scanf("%i", &num4);
	
	maior = 0;
	desc = 0;
	
	if(num1>=maior){
		maior = num1;
		desc =  1;
	}
		if(num2>=maior){
			maior = num2;
			desc =  2;
		}
			if(num3>=maior){
				maior = num3;
				desc =  3;
			}
				if(num4>=maior){
					maior = num4;
					desc =  4;
				}
	
	if(desc == 1){
		soma = (num2+num3+num4);
	}
		else if(desc == 2){
			soma = (num1+num3+num4);
		}
			else if(desc == 3){
				soma = (num1+num2+num4);
			}
				else if(desc == 4){
					soma = (num1+num2+num3);
				}
	
	printf("A soma dos três menores números é: %i", soma);

	system("pause");

} 
