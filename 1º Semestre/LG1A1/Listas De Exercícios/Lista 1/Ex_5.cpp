#include <conio.h>    // s�o bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	float sal_bruto, sal_liq, ir, prev;
	
	printf("Digite o sal�rio Bruto: ");
	scanf("%f", &sal_bruto);
	
	prev = (sal_bruto*0.085);
	ir = (sal_bruto-prev)*0.275;
	sal_liq = (sal_bruto-(ir+prev));
	
	printf("O sal�rio L�quido � %f. \nO IR � %f \n e a previd�ncia � %f.", sal_liq, ir, prev);
	
	
	system("pause");


}
