#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void premios(float *x){
	

float premiosVet[12] = {0.00,		0.01, 		900.00, 	
						1000.00, 	600.00, 	400.00,
						200.00, 	800.00, 	100.00,
						300.00, 	500.00, 	700.00};
 
	srand(time(NULL));
	*x = premiosVet[rand() % 12];
		

}
