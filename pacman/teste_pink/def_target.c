#include "validate_position.h"
#include "def_target_pink.h"


#include<stdio.h>


#define C 30
#define L 23
#define BLINK 1
#define PINK 2
#define INKY 3
#define CLYDE 4
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4
/*Funcao que decide qual o fatasma sera chamado,
conforme o numero da terceira posicao do vetor ghost*/
void def_target(char maze[L][C],int ghost[3], int d)
{
        
 if (ghost[3] == BLINK)
  {

  }
  else if (ghost[3] == PINK)
  {
  def_target_pink1(maze,ghost,d);
        printf("consegui \n\n");
  }
  else if (ghost[3] == INKY)
  {

  }
  else if (ghost[3] == CLYDE)
  {

  }
}


