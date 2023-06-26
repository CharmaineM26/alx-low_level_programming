#include "main.h"

/**
*_puts - prints string to stdout
*@str: string to be printed
*Return: string
*/

void _puts(char *str)

{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('n');
}
