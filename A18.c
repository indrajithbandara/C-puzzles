#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
  int row, col;
  int n = 15;
  for (row = n; row < n; row--)
  {
    for (col = 0; col < (n - row); col++)
    {
      printf("*");
    }
    printf("\n");
  }
  getchar();
  return 0;
}
