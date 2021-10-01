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

void selection_sort (float * vetor) {
	int 	pos_min, i, j;
	float 	aux;
	for(i=0; i < vetSize-1; i++) {
		pos_min = i;
        for (j=i+1; j < vetSize; j++) {
            if (vetor[j] < vetor[pos_min]) {
                pos_min = j; 
            }
        }
        if (pos_min != i){
            aux            = vetor[i];
            vetor[i]       = vetor[pos_min];
            vetor[pos_min] = aux;
        }
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
	system ("cls"); system("mode 100,40"); fillLine(40); printf("Selection Sort"); fillLine(46); 
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
	selection_sort(vet_notas);
	strLine(100, 219);
	printf("\n\n\nResultado ap%cs o Selection Sort\n", 162);
	showGrades(vet_notas);
	free(vet_notas);
	printf("\nDeseja testar novamente? [n/N] = n%co \n> ", 198); fflush(stdin); resp = getche();
	}
	while (resp != 'n' && resp != 'N');
	return(0);
}


























