#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int row, j, spaces, blocks;
  int n=5;

  for (row=0; row < n; row++)
  {
    blocks = 2+row;
    spaces = n+1-blocks;

    for (j = 0; j < spaces; j++)
      printf(" ");
    for (j = 0; j < blocks; j++)
      printf("#");
    printf("\n");
  }
  getchar();
  return 0;
}
