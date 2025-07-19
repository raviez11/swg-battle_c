#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  srand(time(0));
  int player, computer = rand() % 3;
  printf("Choose 0 for Snake,1 for Water,2 for Gun \n");
  scanf("%d", &player);
  printf("Computer chosed %d \n", computer);
  // const int SNAKE, WATER, GUN = 0, 1, 2;
  const int SNAKE = 0, WATER = 1, GUN = 2;

  int MOVE_MATRIX[3][3];

  // Zero out the array
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      MOVE_MATRIX[i][j] = 0;
    }
  }

  // Setup the matrix
  MOVE_MATRIX[WATER][SNAKE] = -1;
  MOVE_MATRIX[SNAKE][WATER] = 1;

  MOVE_MATRIX[GUN][WATER] = -1;
  MOVE_MATRIX[WATER][GUN] = 1;

  MOVE_MATRIX[SNAKE][GUN] = -1;
  MOVE_MATRIX[GUN][SNAKE] = 1;

  int score = MOVE_MATRIX[player][computer]; // either 0 (draw), 1 (won) or -1 (lost)
  if (score == 0)
    printf("It's a draw ! \n");
  else if (score == 1)
    printf("You won !\n");
  else
    printf("You lost !\n");
  return 0;
}
