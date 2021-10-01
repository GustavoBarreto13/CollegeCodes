#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int vetSize;

void fillLine(int f){
	int i;
	for (i=0;i<f;i++)
		printf("%c",177);
}
void strLine(int g, int h){
	int i;
	for (i=0;i<g;i++)
		printf("%c",h);
}

void showGrades(float *grades){
	int i;
	strLine(100, 196);
	for (i=0; i<vetSize; i++){
		printf("%3i=[%4.2f]", i, grades[i]);
	}
	printf("\n"); strLine(100, 196);
	getch();
}

void bubble_sort(float * vetor) {
	int i, j; float aux;
	for ( j = 0; j<vetSize-1; j++) {
    	for ( i = 0; i<vetSize-1-j; i++) {
      		//printf ("\nComparando %.2f com %.2f ", vetor[i], vetor[i+1]);
      		if ( vetor[i] > vetor[i+1]){
         		//printf ("\n(Empurra %.2f e troca com %.2f)", vetor[i], vetor[i+1]); printf("\n");
         		aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
      		}
      		else{
				//printf("\n(J%c em ordem crescente)\n", 160);
    		}
		}
    	//if (j<vetSize-1)
		//showGrades(vetor);
	}
}


void    abastece_notas (float *notas){
	int i;
	for (i=0; i<vetSize;i++){
		do {
			notas[i] = rand()%10 + rand()%10*0.23;
		}
		while ( notas[i] > 10 );
	}
}

void gradesQtd(){
	system ("cls"); system("mode 100,40"); fillLine(40); printf("Bubble Sort"); fillLine(49); 
	printf("\n\nQuantas notas deseja ordenar? \n> ");  fflush(stdin); scanf("%i", &vetSize); printf("\n");
}

int main (){
	float *vet_notas;
	char resp;
	srand(time(NULL));
	system("cls");
	do{
		gradesQtd();
		vet_notas = (float *) malloc (vetSize * sizeof(float));
		if (vet_notas == NULL){
			printf("Não foi possível alocar por MALLOC"); getch();
			exit(0);
		}
	abastece_notas(vet_notas);
	showGrades(vet_notas);
	bubble_sort(vet_notas);
	strLine(100, 219);
	printf("\n\n\nResultado ap%cs o Bubble Sort\n", 162);
	showGrades(vet_notas);
	free(vet_notas);
	printf("\nDeseja testar novamente? [n/N] = n%co \n> ", 198); fflush(stdin); resp = getche();
	}
	while (resp != 'n' && resp != 'N');
	return(0);
}


























