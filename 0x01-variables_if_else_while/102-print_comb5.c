#include <stdio.h>
/**
* main - all possible combinations of two two-digit numbers
*Return: always 0 (success)
*/

int main(void)
{
int i, j;

for (i = 0; i < 99; i++)
{
for (j = 0; j < 99; j++)

{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((j % 10) + 48);
putchar((j % 10) + 48);
 if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
