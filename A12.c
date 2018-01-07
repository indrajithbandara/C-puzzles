#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
  int j;
  int start = 147, finish = 53;
  int count = 0;

  for (j = start; j >= finish; j -= 2)
  {
    printf("%3d", j);
    if (count % 7 == 0) printf("\n");
  }
  getchar();
  return 0;
}
