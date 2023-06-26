#include "main.h"

/**
*_puts - prints string to stdout
*@str: string to be printed
*Return: string
*/

void _puts(char *str)

{
while (*str != '\0')
{
puts(str);
str++;
}
puts("n");
}
