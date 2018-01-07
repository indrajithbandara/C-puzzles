#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
  int j;
  int count = 0;
  int n = 100;

  for (j = 1; j <= n; j++, count ++)
  {
    if ((j % 3) && (j % 5))
    {
      printf("%3d", j);
    }

    if (count % 5 == 0) printf("\n");
  }

  getchar();
  return 0;

}
