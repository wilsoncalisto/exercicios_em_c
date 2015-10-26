
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"

#ifdef WIN32  //se for windows
  #define limpa_tela system("cls") //limpa tela
#else //senão, ex.: linux
  #define limpa_tela system("/usr/bin/clear") //limpa tela
#endif

int vetor_posicao[9];
int main()
{
	int jogada,modo_de_jogo,i;
	int matriz[3][3] ={{'1','2','3'},
			    {'4','5','6'},
			    {'7','8','9',}};
			    
	char mprint[3][3]={{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};
	
	modo_de_jogo=show_menu();
	limpa_tela;
	mostra_matriz(matriz,mprint);

	for(i=1;i<=9;i++)
	{
		if(modo_de_jogo == 1)//multiplayer
		{
			jogada=jogada_correta(vetor_posicao,i);//pedindo jogada do USUARIO 			
		}		
		else 
		{
			if(i%2==0)//pedindo jogada
			{
				if(modo_de_jogo==2)//facil 
				{				
					jogada=play_easy_bot(vetor_posicao);//MAQUINA JOGA FACIL
					printf("joguei no %d",jogada);
				}
				else
				{
					//jogada=jogada_dificil;MAQUINA JOGA DIFICIL
				}
			}
			else
			{
				jogada=jogada_correta(vetor_posicao,i);//pedindo jogada do USUARIO
			}
		}			
		play(matriz,vetor_posicao,i,modo_de_jogo,jogada);
		limpa_tela;
		mostra_matriz(matriz,mprint);
		if(ganhou(matriz))
		{
		     if(i%2==0)// se i é par é o '0'
		     {
		     	printf("jogador 2 o 'O' ganhou\n");			     
		     }
		     else// se i é impar é o 'X'
		     {
		     	printf("jogador 1 o 'X' ganhou\n");
		     }       
			break;
		}
			/* verifica se velhou*/
		if(i==9)
		{
			printf("\nVelhou\n");
			break;
		}
	}
	
	
    return 0;
}
