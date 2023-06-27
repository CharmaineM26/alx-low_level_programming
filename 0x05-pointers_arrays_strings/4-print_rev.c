#include "main.h"
#include <unistd.h>
#include <string.h>

/**
*print_rev - prints string in reverse
*@s: the input pointer
*Return: void
*/

void print_rev(char *s)
{
int len = strlen(s);
int i;
 
for (i = len - 1 ; i >= 0 ; i--)
{
putchar(s[i]);
}
putchar('\n');
}
