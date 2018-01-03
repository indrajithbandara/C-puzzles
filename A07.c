#include<stdio.h>
#include<stdlib.h>

int main (int args, char *argv[])
{
int b,N;
printf("Enter N:");
scanf("%d",&N);

for(b=1;b<=13;b+=2)
{
printf("%3d\n",b);
}
getchar();
return 0;
}
