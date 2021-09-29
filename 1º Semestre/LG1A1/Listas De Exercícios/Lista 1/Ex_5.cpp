#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	float sal_bruto, sal_liq, ir, prev;
	
	printf("Digite o salário Bruto: ");
	scanf("%f", &sal_bruto);
	
	prev = (sal_bruto*0.085);
	ir = (sal_bruto-prev)*0.275;
	sal_liq = (sal_bruto-(ir+prev));
	
	printf("O salário Líquido é %f. \nO IR é %f \n e a previdência é %f.", sal_liq, ir, prev);
	
	
	system("pause");


}
