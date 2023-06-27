#include "main.h"
#include <unistd.h>

/**
 * puts2 - prints every other character
 * @str: input string pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}
putchar('\n');
}
