#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
  int j;
  for (j = 0; j < 25; j += 5)
  {

    printf("%d %d %d %d\n", j, j + 1, j + 2, j + 3, j + 4);
  }
  getchar();
  return 0;
}
