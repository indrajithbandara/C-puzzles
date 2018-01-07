#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
  int line, col;
  int n = 15;

  for (line = 0; line <= n; line++)
  {
    for (col = 0; col < line; col++)
      printf("*");
    printf("\n");
  }
  getchar();
  return 0;
}
