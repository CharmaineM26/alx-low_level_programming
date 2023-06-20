#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main entry
*Dscription: 'print numbers of base 10'
*Return: Always (0)
*/
int main(void)
{
int n;
for (n = 0 ; n <= 9 ; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
