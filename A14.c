#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argvs[])
{
  int k;
  int base;
  int j;

  for (k = 0; k <= 11; k++)
  {
    base = 100 * k;

    for ( j = 0; j < 100; j++)
      if (!(j % 23))
        printf("%7d", (base + j));

    printf("\n");
  }
  getchar();
  return 0;
}
