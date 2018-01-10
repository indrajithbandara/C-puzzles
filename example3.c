#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char number[51];
  int row, j, spaces, blocks;
  int n=-1;

  do {
      printf("Height: ");
      fgets(number, 50, stdin);
      if (strlen(number) < 1 || !isdigit(number[0])) continue;
      n = atoi(number);
  } while(n < 0);

  if (!n) return 0;

  for (row=0; row < n; row++)
  {
    blocks = 2+row;
    spaces = n+1-blocks;

    for (j = 0; j < spaces; j++)
      printf(" ");
    for (j = 0; j < blocks; j++)
      printf("#");

    if (row != (n-1))
        printf("\n");
  }

  return 0;
}
