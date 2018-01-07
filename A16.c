#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
  int row, col;
  int n = 7, m = 21;
  for (n = 7; n <= 21; n++)
  {
    for (col = 0; col < 7; col++)
      printf("*");
    printf("\n");
  }
  getchar();
  return 0;
}
