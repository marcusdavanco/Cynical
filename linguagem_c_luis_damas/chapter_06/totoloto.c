#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 49 /* Total de Nº do Jogo */
#define MIN_APOSTA 6 /* Aposta Mínima - 6 Nºs */
#define NUM_LIN 7 /* Nº de nºs apres. pro linha no volante */

/* Declaração das Funções */
void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n);
void Apresentar(int res[]);

/*
 * Inicia o gerador de nºs aleatórios com um nº que depende
 * da hora que se executa a função 
 */

void Inic_Random()
{
	long ultime;
	time(&ultime);
	srand((unsigned) ultime);
}

/* Inic. com ZERO o vetor de controle dos nºs selecionados */
void Inic(int v[])
{
	int i;
	for(i=0;i<NUMS;i++)
		v[i]=0;
}

/*
 * Lê o nº de Números a apostar. Aceita valores entre MIN_APOSTA e NUMS.
 * Aceita o valor ZERO para indicar que se quer terminar o Prog.
 */

int Ler_Ns_Apostar()
{
	int n;

	do 
	{
		printf("Quantos Nºs quer apostar ( 0 - Terminar ) : ");
		scanf("%d", &n);
	}
	while ((n<MIN_APOSTA || n > NUMS) && n!=0);

	return n;
}

/*
 * Gera n números aleat. e coloca a respectiva posição do vetor
 * com o valor 1 que indica que esse nº foi selecionado.
 */

void Gerar(int *v, int n)
{
	int i, indice;
	for (i=1;i<=n;i++)
		{
			indice = rand()%NUMS; /* Devolve nº aleatório entre 0 e NUMS -1 */
				if (v[indice]==0)	/* Não foi selecionado */
					v[indice]=1;
				else /* Este nº já tinha sido selecionado, */
					i--;	
		}	
}

/*
 * Apresenta o formato do volante colocando XX nos nºs
 * selecionado para a aposta.
 */

void Apresentar(int res[])
{
	int i;
	for (i=0;i<NUMS;i++)
	{
		if (res[i]==0)
				printf(" %2d", i+1);
		else
				printf(" XX");
		if ((i+1)%NUM_LIN==0) putchar('\n');
	}
	putchar('\n');
}

main()
{
	int vetor[NUMS];

	int n_nums; /* Nº de Números para Jogar no jogo 6..49 */

	Inic_Random();
	while(1)
	{
		Inic(vetor);
		if ((n_nums = Ler_Ns_Apostar())==0) break;
		Gerar(vetor, n_nums); /* Gerar os Nºs a Apostar */
		Apresentar(vetor);
	}
}
