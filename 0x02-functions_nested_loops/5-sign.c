#include "main.h"

/**
*print_sign - print sign of number
*@n: The input number as a n integer
*Return: 1 and + if greater than 0, 0 and 0 if is 0, -1 and - is less than 0
*/
int print_sign(int n)
{
if  (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{ _putchar(48);
return (0);
}
_putchar('\n');
}

