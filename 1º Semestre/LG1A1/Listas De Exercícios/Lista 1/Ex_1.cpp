#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acento no printf

	float pi;
	float r;
	float altura;
	float volume;
	
	printf("Escreva o raio da lata: ");
	scanf("%f", &r);
	
	printf("Escreva a altura da lata: ");
	scanf("%f", &altura);
	
	volume = 3.14159*(r*r)*altura;
	
	printf("o volume é %f!!", volume);
	
	system("pause");

}
