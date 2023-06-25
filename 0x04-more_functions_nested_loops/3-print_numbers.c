#include "main.h"
/**
* print_numbers - function that prints the numbers, from 0 to 9
*
* Return: numbers from 0 to 9.
*/

void print_numbers(void)

{

	char c;

for (c = 0 ; c <= 9 ; c++)
{
putchar(c + '0');
}
putchar('\n');
}
