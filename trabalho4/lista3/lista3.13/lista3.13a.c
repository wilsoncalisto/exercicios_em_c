/*
 * Programacao de Computadores e ALgoritmos
 * lista3.13a.c
 *
 * Equipe:
 *      Sergio Pinheiro
 *      Andressa Moreira
 *      Wilson Araújo
 *      Gabriel Faraco
 *      Benjamin Borges

 Para executar esse programa utilizes ./lista3.13a < dados.txt

 *
 */

#include "insere_resultado.h"
#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	char ***matriz_resultado;
	char ***tabela;
	int ntimes=0,njogos, njogos;
	scanf("%d", &ntimes);
	njogos = (ntimes * (ntimes -1))/2;
	printf("Qauntidade de jogos possiveis =  %d\n", njogos);

	matriz_resultado = insere_resultado(njogos);
	tabela = cria_tabela(ntimes, njogos, matriz_resultado);
	imprime_tabela(ntimes, tabela);
	printf("######################################\n\n");
	ordena_tabela(ntimes, tabela);
	imprime_tabela(ntimes, tabela);
	
	free(matriz_resultado);

	return 0;
}
