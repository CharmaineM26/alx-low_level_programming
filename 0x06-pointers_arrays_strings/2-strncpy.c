#include "main.h"
#include <stddef.h>

/**
*_strncpy - copies a string
*@dest: destination string pointer
*@src: source string pointer
*@n: input integer
*Return: copied string
*/

char *_strncpy(char *dest, char *src, int n)

{
if (dest == NULL)
{
return (NULL);
}

while (src[n] != '\0')
{
dest[n] = src[n];
n++;
}
dest[n] = '\0';
return (0);
}
