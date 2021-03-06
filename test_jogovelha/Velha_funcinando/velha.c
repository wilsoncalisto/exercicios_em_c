#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "funv.c"
#include "minimax.c"

int main ()
{
   int jogs;
   jogs = show_menu();

   if (jogs == 3) return 0;

   char ** mat, ** aux;
   mat = malloc(3 * sizeof(char));
   aux = malloc(3 * sizeof(char));
   
   int i, j, cont = 1, vencedor = 0;

   for (i = 0; i < 3; i++)
   {
       mat[i] = malloc(3 * sizeof(char));
       aux[i] = malloc(3 * sizeof(char));
   }
   

   for (i = 0; i < 3; i++)
   {
       for (j = 0; j < 3; j++)
       {
           mat[i][j] = int_to_char(cont); 
           cont++;
       }
   }
   cont = 0;

   int pos, jogador = 1, acabou = 1;

   srand((unsigned)time(NULL));

   while (acabou <= 9)
   {
        show_tab(mat);

        if (jogador == 1)
        {
            printf("Jogador 1: ");
            scanf("%d", &pos);
            aux = jogada(mat, pos, 1);
            if (aux[0][0] != ' ')
            {
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        mat[i][j] = aux[i][j];
                    }
                }
                jogador = 2;
                acabou++;
            }
        }
        else
        {
            //printf("Jogador 2: ");
            if (jogs == 2)
            {
                printf("Jogador 2: ");
                scanf("%d", &pos);
            }
            if (jogs == 1)
            {
                pos = rand() % 9;
                pos++;
            }
            if (jogs == 4)
                pos = joga_minimax(mat);
            aux = jogada(mat, pos, 2);
            if (aux[0][0] != ' ')
            {
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        mat[i][j] = aux[i][j];
                    }
                }
                jogador = 1;
                acabou++;
            }
        }

        vencedor = fim(mat);
        //printf("vencedor = %d\n", vencedor);
        if (vencedor != 0)
            acabou = 10;
   }
   
   show_tab(mat);

   if (vencedor == 0)
       printf("\nVelhou!\n");
   else
       printf("\nO jogador %d gannhou\n", vencedor);

}


