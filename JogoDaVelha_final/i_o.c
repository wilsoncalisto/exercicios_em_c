#include <stdio.h>


//A função retorna a saidas, que correspondem ao numero do parametro de entrada "saida"
//A matriz dada como entrada é pelo case 3, que agora é o antigo MOSTRA_MATRIZ.
// Programador: Wilson Oliveira Neto.
void saida(int saida, int matriz[3][3], char mprint[3][3])
{
    switch(saida)
    {
        case 1: printf("******* JOGO DA VELHA *****\n\n1 multiplayer\n2  alone\n3.Exit\n");
                break;
        case 2: printf("Dificuldade: \n2. easy\n3. hard\n");
                break;
        //CASE 3 AGORA É O NOVO MOSTRA_MATRIZ, quando quiser chamar é só chamar essa função e pedir o primeiro parametro é ele.
        case 3: //mostra_matriz(matriz,mprint); //fazer funcionar
                break;
        case 4: printf("Digite a jogada jogador 2\n");
                break;
        case 5: printf("Digite a jogada jogador 1\n");
                break;
        case 6: printf("Posicao invalida! \n");
                break;
        case 7: printf("jogador 2 o 'O' ganhou\n");
                break;
        case 8: printf("jogador 1 o 'X' ganhou\n");
                break;
        case 9: printf("\nVelhou\n");
                break;
        case 10: printf("O");
                break;
        case 11: printf("X");
                break;

    }

}

//A função pega a entrada de dados, serão processados em uma outra função.
// Programador: Wilson Oliveira Neto.
int entrada()
{
    int jogs=0;
    
    scanf("%d", &jogs);
    
    return jogs;
}

//programador Raí Santos
//funcao para printar a matriz preenchida com X e O

void mostra_matriz(int matriz[3][3], char mprint[3][3])
{
    int i,j;
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(matriz[i][j]==-1)
            {
                mprint[i][j]= 'O';
            }
            if(matriz[i][j]==-2)
            {
                mprint[i][j]='X';
            }
        }
    }
    printf("   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n   |   |\n",mprint[0][0],mprint[0][1],mprint[0][2],mprint[1][0],mprint[1][1],mprint[1][2],mprint[2][0],mprint[2][1],mprint[2][2]);	
}
