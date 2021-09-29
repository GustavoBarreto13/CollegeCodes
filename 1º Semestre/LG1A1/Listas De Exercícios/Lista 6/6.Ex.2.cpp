#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 4

typedef struct 
{
    char name [20];
    int eng, math, phys;
    float media; 
}student;   // Typedef define um novo tipo de dados
            // Struct cria uma estrutra de dados chamada student, com os dados dentro.

student data [N] = {            // atribui uma váriavel com o tipo student 
    {"Evandro", 82, 72, 58 },   // de acordo com os parâmetros definidos anteriormente
    {"Thomas",  77, 82, 79 },
    {"Sabrina", 52, 62, 39 },
    {"Melinda", 61, 82, 88 }
}; 

void media()
{
    int i;
    for (i = 0; i < N; i++)
    {
       data[i].media = ((data[i].eng + data[i].math + data[i].phys) / 3);
    }
    
}

int main()
{
    media();
	setlocale(LC_ALL, "Portuguese");  
    int i;
    for (i = 0; i < N ; i++)    //for usado para imprimir a tabela com todas as informções
    {
        printf("%7s: Eng = %3d Math = %3d  Phys = %3d  Media = %2.f\n", data[i].name, data[i].eng, data[i].math, data[i].phys, data[i].media); 
    }
    
	return 0;
	
}
