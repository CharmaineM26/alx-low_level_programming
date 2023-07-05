#include "main.h"

/**
*_memcpy - copys memory area
*@dest: input destination
*@src: source destination
*@n: number of bytes to set
*Return: a pointer to the destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}

return (dest);
}
