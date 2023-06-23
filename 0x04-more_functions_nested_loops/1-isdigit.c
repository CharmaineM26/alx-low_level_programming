#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isdigit - a function that checks for a digit.
* @c: 1-_isdigit
* Return: 1 (success) else 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
