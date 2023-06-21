#include "main.h"

/**
* print_times_table - print n n times table, starting with 0
* @i: the number to be treated
* @j: the number to be treated
* Return: k unless n less than 0 or greater than 15 then print nothing
*/
void print_times_table(int i, int j)
{
int i, j, k;

for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9; j++)
{
k = i * j;
if (j != 0)
_putchar(',');
if (k < 10)
_putchar(' ');
else
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
_putchar('n');
}
}
