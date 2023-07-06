#include "main.h"

/**
 *_puts_recursion - prints a string in reverse
 *s: string input
 *Return: reverse string
 */

void _print_rev_recursion(char *s)

{
  if (*s)
    {
      _putchar(*s);
      _print_rev_recursion(s + 1);
    }
_putchar ('\n')
}
