#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");  
	int x, p1, p2, p3, p4;
	
	x = 0;
	p1 = 0;
	p2 = 0;
	p3 = 0;
	p4 = 0;

	while (x >= 0)
	{
		printf("Escreva números de 0 a 100: ");
		scanf("%i", &x);
			if (x >= 0 && x <= 25)
			{
				p1++;
			}
			if (x >= 26 && x <= 50)
			{
				p2++;
			}
			if (x >= 51 && x <= 75)
			{
				p3++;
			}
			if (x >= 76 && x <= 100)
			{
				p4++;
			}
	}

	printf("Os números estão distribuídos da seguinte maneira: \n");
	printf("[0-25]: %i\n [26-50]: %i\n [51-76]: %i\n [76-100]: %i", p1, p2, p3, p4);



}
	
	
	
