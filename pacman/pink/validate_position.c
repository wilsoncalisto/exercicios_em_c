#define C 30
#define L 23

int validate_position(char maze[L][C], int vetor[3])
{
  int y=vetor[0],x=vetor[1];
  if (maze[y][x]== ' ' || maze[y][x] == '6' || maze[y][x] == '7')
  {
    return 1;
  }
  else
  {
    return 0;
  }

}
