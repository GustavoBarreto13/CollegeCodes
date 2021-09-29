#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	
	float c, n, e, sal, sal_e, sal_t;
	
	printf("Digite o código: ");
	scanf("%f", &c);
	
	printf("Digite o número de horas trabalhadas: ");
	scanf("%f", &n);
	
	e = 0;
	sal = (n*10);
	
	if(n>50){
		e = (n-50);
	}
	
	sal_t = sal + (e*10);
	sal_e = (e * 10);
	
	printf("O salário total é %f \nE o salário excedente é %f", sal_t, sal_e);
	
	
	system("pause");
}
