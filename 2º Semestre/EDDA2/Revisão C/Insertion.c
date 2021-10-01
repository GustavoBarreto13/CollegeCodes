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

void insertion_sort(float * vetor) {
    float escolhido;
    int   anterior, i;
    for (i = 1; i < vetSize; i++) {
		escolhido = vetor[i];
		anterior  = i - 1;
		//printf("\nAtual[%i]: %.2f\nAnterior[%i]: %.2f\n", i, escolhido, i-1, vetor[anterior]);
        while ( (anterior >= 0) && (vetor[anterior] > escolhido) ) {
	    	vetor[anterior + 1] = vetor[anterior];
	    	anterior--;
		}
		vetor[anterior + 1] = escolhido;
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
	system ("cls"); system("mode 100,40"); fillLine(40); printf("Insertion Sort"); fillLine(46); 
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
	insertion_sort(vet_notas);
	strLine(100, 219);
	printf("\n\n\nResultado ap%cs o Insertion Sort\n", 162);
	showGrades(vet_notas);
	free(vet_notas);
	printf("\nDeseja testar novamente? [n/N] = n%co \n> ", 198); fflush(stdin); resp = getche();
	}
	while (resp != 'n' && resp != 'N');
	return(0);
}


























