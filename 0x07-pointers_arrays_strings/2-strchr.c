#include "main.h"

/**
*_strchr - locates a character in string
*@s: string input
*@c: character to be located
*Return: a pointer or NULL
*/

char *_strchr(char *s, char c)
{
int i;

for (i = 0 ; s[i] != '\0' ; i++)
{
if (s[i] == c)
return (&s[i]);
}

return (0);
}
