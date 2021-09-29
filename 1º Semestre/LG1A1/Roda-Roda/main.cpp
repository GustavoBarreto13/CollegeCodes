#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <windows.h>

// Módulos Separados
#include "proxJog.cpp"
#include "premios.cpp"
#include "cronometro.cpp"


//constantes
#define DICAS 9

//variaveis globais
int i = 0;
int j = 0;


int main()
{
	
	setlocale(LC_ALL, "Portuguese"); 
	
char palEscolhida[3][17]; 			// Armazena a palavra sorteada
char DicaFinal[17]; 				// Armazena qual a dica sorteada
int sortPista;						// Armazena o número sorteado
int jogAtual = 1; 					// Armazena o jogador da rodada
int count; 							// contador para sair do primeiro do while
float premioS; 						// Armazena o prêmio da rodada
char letra; 						// Armazena a letra digitada pelo jogador
int letraExis; 						// Usada para validar se a letra digitada existe nas palavras

typedef struct						
{
	char nome[17];
	int qtd;
	char palavra[3][17];
}jogo; 								//Organiza os nomes, quantidade de palavras e palavras a serem sorteadas
	
	jogo tabelaDica[DICAS];			//Cria uma tabela com o tipo jogo

	
	FILE *file;
	file = fopen("palavras.gus", "r");
	
		for (j=0; j<DICAS; j++) 	//Lê as palavras do arquivo "palavras.gus" e armazena dentro do Struct
		{
			fscanf(file, "%s %i", &tabelaDica[j].nome, &tabelaDica[j].qtd);
				for (i=0; i<tabelaDica[j].qtd; i++)
				{				
					fscanf(file, "%s", &tabelaDica[j].palavra[i]);
				}
		};
		
		
	fclose(file); 					
	
	srand(time(NULL));
	sortPista = rand() % DICAS; // Sorteio Pista
		
	strcpy(DicaFinal, tabelaDica[sortPista].nome); // Copia a dica sorteada para a variavel
	

	
	for (i=0; i<tabelaDica[sortPista].qtd; i++)  
		{				
			strcpy(palEscolhida[i], tabelaDica[sortPista].palavra[i]); 	// Copia a(s) palavras sorteadas para a variavel
			count += strlen(tabelaDica[sortPista].palavra[i]); 			// Abre contagem de letras
		}
	
	
	
	char DicaPont[3][17];
		for (i=0; i<tabelaDica[sortPista].qtd; i++)
		{				
			for (j = 0; j < strlen(palEscolhida[i]); j++) 				// Definir quantos "-" aparecem
			{
				DicaPont[i][j] = '-';
			}
			DicaPont[i][j] = '\x0'; 								
		}
		
typedef struct
{
	char jogador[17];
	float dinheiros;
}jogador; 			//  link do jogador com seu dinheiro acumulado

jogador ListaJog[3] = {	"Jogador 1", 0.00,
						"Jogador 2", 0.00,
						"Jogador 3", 0.00};



///////////////////////////////////////////////////////////////////////
	do{			
		
		
		 
		letraExis = 0;
				
		printf("\t\t\tA palavra está associada com: %s \n\n", DicaFinal);
		
		for (i=0; i<tabelaDica[sortPista].qtd; i++) //palavras pontilhadas uma em cada linha
		{
			printf("				%s\n\n", DicaPont[i]);
		}
				
		printf("%s			%s			%s\n", ListaJog[0].jogador, ListaJog[1].jogador, ListaJog[2].jogador);
		printf("=========			=========			=========\n");
		printf("R$%2.f				R$%2.f				R$%2.f\n", ListaJog[0].dinheiros, ListaJog[1].dinheiros, ListaJog[2].dinheiros);
	
		printf("\n\nJogador %i, Rode a Roda!\n", jogAtual);
		getchar();
		
		premios(&premioS);	// Chamada Função Premio
		
		if (premioS == 0.01f)
		{	
			printf("Perde Tudo\n\n");
			ListaJog[jogAtual-1].dinheiros = 0.00;
			proxJog(&jogAtual);
			getchar(); 
		}	
		else 
		{	
			if (premioS == 0.00f)
			{
				printf("Passa a Vez");
				proxJog(&jogAtual);
				printf("\nA vez será passada para o jogador %i\n", jogAtual);
				getchar();
			}
			else
			{
				printf("Uma letra por R$ %2.f :", premioS);
				letra = toupper(getche()); 
				
				for (i = 0; i < tabelaDica[sortPista].qtd; i++) // Checar se a letra digitada existe nas palavras
				{
					for (j = 0; j < strlen(palEscolhida[i]); j++)
					{
						if(palEscolhida[i][j] == letra)
						{
							letraExis = 1;
						}
					} 
				}	
				
				if(letraExis == 1)
				{
					for (i = 0; i < tabelaDica[sortPista].qtd; i++) // Substituir os "-" pela letra digitada
					{
						for (j = 0; j < strlen(palEscolhida[i]); j++) 
						{
							if(palEscolhida[i][j] == letra)
							{	
								DicaPont[i][j] = letra;
								ListaJog[jogAtual-1].dinheiros = (ListaJog[jogAtual-1].dinheiros + premioS); // adicionar dinheiros
								count--;
							}
						}
						
					}	
					
				}
				else
				{
					proxJog(&jogAtual);
					printf("\nNão existe a letra %c nas palavras.", letra);
					printf("\nA vez será passada para o jogador %i\n\n", (jogAtual));
						getchar();
				}	
			}	
		};
		
		
			system("cls");
	}while (count > 3);			

////////////////////////////////////////////////////////////////////////////////////////

char resposta[3][17];	// Armazena a palavra completa 
int vencedor, final;	

	do
	{
		vencedor = 0;
		
		
		printf("			A palavra está associada com: %s \n\n", DicaFinal);
		
		for (i=0; i<tabelaDica[sortPista].qtd; i++) //palavras pontilhadas
		{
			printf("				%s\n\n", DicaPont[i]);
		}
				
		printf("%s			%s			%s\n", ListaJog[0].jogador, ListaJog[1].jogador, ListaJog[2].jogador);
		printf("=========			=========			=========\n");
		printf("R$%2.f				R$%2.f				R$%2.f\n", ListaJog[0].dinheiros, ListaJog[1].dinheiros, ListaJog[2].dinheiros);
		
		printf("\nJogador %i: faltam 3 letras para completar a palavra.", jogAtual);
		printf("\nVocê tem 5 segundos para pensar e depois digitar a palavra...");
		cronometro(); // Ativa a contagem regressiva
		
		do //sorteia o prêmio novamente
		{
			premios(&premioS);
		}while (premioS == 0.00f || premioS == 0.01f); // Para não cair 0,00 ou 0,01
		
		
		for (i=0; i<tabelaDica[sortPista].qtd; i++) // recebe as respostas do jogador 
		{
			printf("\n\nValendo R$ %2.f, a palavra %i é: ", (premioS+ListaJog[jogAtual].dinheiros), (i+1));
			fflush(stdin);
			gets(resposta[i]);
			
			// Converter para maiusculo
		    for(j=0; j<strlen(resposta[i]); j++) 
		    {                            
		     resposta[i][j] = toupper(resposta[i][j]);  
		    }
			
		}
		
		for (i=0; i<tabelaDica[sortPista].qtd; i++) // Verifica se o jogador acertou todas as palavras
		{
			if (strcmp(resposta[i], palEscolhida[i]) == 0) // Compara as palavras
			{
				vencedor++; 
			}
		}
		
		if (vencedor == tabelaDica[sortPista].qtd) 
		{
			ListaJog[jogAtual-1].dinheiros = (ListaJog[jogAtual-1].dinheiros + premioS);
			final = 4; // Condição de saída do While
		}
		else
		{
			proxJog(&jogAtual);
			final++; 
		}
				
		
		system("cls");		
	}while (final < 3);

////////////////////////////////////////////////////////////////////////////////////////

	printf("			A palavra está associada com: %s \n\n", DicaFinal);
		
	for (i=0; i<tabelaDica[sortPista].qtd; i++) //palavras pontilhadas
		{
			printf("				%s\n\n", palEscolhida[i]);
		}
	
	printf("%s			%s			%s\n", ListaJog[0].jogador, ListaJog[1].jogador, ListaJog[2].jogador);
	printf("=========			=========			=========\n");
	printf("R$%2.f				R$%2.f				R$%2.f\n", ListaJog[0].dinheiros, ListaJog[1].dinheiros, ListaJog[2].dinheiros);

	if (final == 3)
	{
		
		printf("\nFim de Jogo!");
	}
	else
	{
		
		switch (jogAtual)
		{
			case 1 :
				printf("Vencedor\n");
			break;
			
			case 2 :
				printf("\t\t\t\tVencedor\n");
			break;
			
			case 3 :
				printf("\t\t\t\t\t\t\t\tVencedor\n");
			break;
		}
	}
	
}
