/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista3.14.c
 *
 * Equipe:
 *	Paulo Henrique
 *	Raí Santos
 *	Jackson Kelvin
 *	Wilson Calisto
 *	Ewerton Petillo
 */


#include<stdio.h>
#include<stdlib.h>
#include"funcao.h"
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int **matriz,*itinerario,custo=0,ordem,i,tamanho_do_vetor=0;
    
    /* pede a ordem da matriz */
  
    scanf("%d",&ordem);

	/* inicia o vetor com o dobro da ordem da matriz*/    
	tamanho_do_vetor=ordem*2;
    itinerario=(int*)(malloc(tamanho_do_vetor*sizeof(int)));    

    /*inicia a matriz*/
    matriz=(int**)malloc(ordem*sizeof(int*));  
    for ( i=0;i<ordem ;i++ )
    {
        matriz[i]=(int*)malloc(ordem*sizeof(int));
    }
	
 	/*completa a matriz com dados*/
    pede_dados(matriz,ordem);
   
    /* completa o vetor itinerario com dados */
    completa_vetor(itinerario,tamanho_do_vetor);

	/* calcula o custo do itinerario*/
    custo=calcula_custo(matriz,itinerario,tamanho_do_vetor);
    
    /* mostra o resultado final*/
    printf ( "o custo do itinerário ");
    /*imprime vetor*/
	imprime_vetor(itinerario,tamanho_do_vetor);
	printf ( "é\n %d\n",custo);
    return 0;
}	
