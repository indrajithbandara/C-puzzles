#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
int row, j, spaces, stars;
int n = 12;
for(row = 0; row < n; row++)
{
stars = 2*row + 1;
spaces = (2*n - stars) / 2;
for(j = 0; j < spaces; j++)
printf(".");
for(j = 0; j < stars; j++)
printf("*");
for(j = 0; j < spaces; j++)
printf(".");
printf("\n");
}
printf("\n");
getchar();
return 0;
}
