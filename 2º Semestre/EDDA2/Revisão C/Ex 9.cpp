#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	

int main(){
	
	setlocale(LC_ALL, "Portuguese");  
	
	int seg, h, m, s, d;
	
	printf("Digite a quantidade de segundos: ");
	scanf("%i", &seg);
	
	
	h = (seg / 3600);
	m = (seg -(3600 * h))/60;
	s = (seg -(3600 * h)-(m * 60));
	d = (h / 24);
	
	printf("%i segundos correspondem a %i dias, %i horas, %i minutos e %i segundos\n", seg, d, h, m, s);
	
	system("pause"); 
}
