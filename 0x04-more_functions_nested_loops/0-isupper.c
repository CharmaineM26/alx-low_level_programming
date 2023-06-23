#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isupper - a function that checks for uppercase character.
* @c: 0.isupper
* Return: 1 (sucess) else 0
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
