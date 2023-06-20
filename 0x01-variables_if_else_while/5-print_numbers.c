#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Description: 'print single digit numbers of base 10'
*Return: always (0)
*/
int main(void)
{
int n;

for (n = 0 ; n <= 9 ; n++)
{
printf("%d", n);
}
printf("\n");
return (0);
}
