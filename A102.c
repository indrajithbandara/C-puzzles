#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
  int j;
  for (j = 0; j < 25; j += 5)
  {
    int i;
    for (i = j; i < (j + 5); i++)
      printf("%d", i);
    printf("\n");
  }
  getchar();
  return 0;
}
