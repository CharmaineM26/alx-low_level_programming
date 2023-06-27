#include "main.h"

/**
*print_rev - prints string in reverse
*@s: the input pointer
*Return: string in reverse
*/

void print_rev(char *s)
{
if (s == NULL)
{
return;
}
int length; 
length = 0;

while (s[length] != '\0')
{
length++;
}
int i;
for (i = length - 1 ; i >= 0 ; i--)
{
putchar(s[i]);
}
putchar('\n');
}
