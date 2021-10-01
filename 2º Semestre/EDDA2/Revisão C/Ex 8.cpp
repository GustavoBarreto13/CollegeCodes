#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


typedef struct {
    char nome[20];
	float custo;
}produto;
	

int main(){
	
	setlocale(LC_ALL, "Portuguese");  
	
	produto venda;
	
	printf("Digite o nome do produto: ");
	gets(venda.nome);
	
	printf("Digite o custo do produto em R$: ");
	scanf("%f", &venda.custo);
	
	printf("O valor de venda do produto %s é :R$%f\n", venda.nome, (venda.custo + (venda.custo * 0.3)));
		
	system("pause"); 
}
