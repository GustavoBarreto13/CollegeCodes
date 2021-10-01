#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>	

int main(){
	
	setlocale(LC_ALL, "Portuguese");  
	
	int num[3], q1, q2, q3, sum;
	
	for (int i = 0; i < 3; i++){
		printf("Digite o %iº número: ", (i+1));
		scanf("%i", &num[i]);		
	}
	
	q1 = pow(num[0], 2);
	q2 = pow(num[1], 2);
	q3 = pow(num[2], 2);
	sum = (q1 + q2 + q3);
			
	printf("A soma dos quadrados dos números é: %i\n", sum);
	
	system("pause"); 
}
