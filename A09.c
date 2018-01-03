#include<stdio.h>
#include<stdlib.h>

int main (int args, char *argv[])
{
int j;
int sumAll = 0, sumOdd = 0, sumEven = 0;
int n = 100;

printf("Enter n: ");
scanf("%d",&n);

for(j=0;j<= n;j++)
{
if(!(j%3) || !(j%4))
continue;
if (j&1)
sumOdd += j;
else
sumEven += j;
sumAll += j;
}
printf("Sum = %4d, Sum of Odd = %4d, Sum of Even = %4d\n", sumAll, sumOdd, sumEven);
getchar();
return 0;
}
