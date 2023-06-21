#include "main.h"
/**
*print_alphabet_x10 - print alphabet 10 times in lowercase
*Description: 'print alphabet x10 in lowercase'
*Return: always 0
*/

void print_alphabet_x10(void)
{

int i;
int j;

for (i = 1 ; i <= 10 ; i++)
{
for (j = 97 ; j <= 122 ; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
