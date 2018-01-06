#include <stdio.h>
#include <stdlib.h>

int main (int args, char *argv[])
{
  int j;
  for (j = 0; j < 25; j++)
  {
    printf("%d", j);
    if  (j && !(j % 5))
      printf("\n");
  }
  getchar();
  return 0;
}
