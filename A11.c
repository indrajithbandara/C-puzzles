#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
  int j;
  const int n = 53;

  for (j = 1; j <= n; j += 2)
  {
    printf("%3d", j);
    printf("\n");
  }
  getchar();
  return 0;
}
