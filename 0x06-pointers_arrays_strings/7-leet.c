#include "main.h"

/**
*leet - encodes a string into 1337
*@n: input string pointer to be modified
*Return: a pointer to a modified character
*/

char *leet(char *n)
{

char str1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char str2[] = {52, 51, 48, 55, 49, 53};

int i, j;

for (i = 0 ; n[i] != '\0' ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
if (n[i] == str1[j])
{
n[i] = str2[j];
}
}
}
return (n);
}
