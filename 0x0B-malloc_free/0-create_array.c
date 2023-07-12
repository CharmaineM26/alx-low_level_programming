#include "main.h"
#include <stdlib.h>

/**
*create_array - creates an array of chars & intilizes a char
*@size: size of array
*@c: input char value
*Return: 0 success else Null
*/

char *create_array(unsigned int size, char c)
{
char *mystring;
unsigned int i;

mystring = malloc(sizeof(char) * size);

if (size == 0 || mystring == NULL)
{
return (NULL);
}

for (i = 0 ; i < size ; i++)

mystring[i] = c;
return (mystring);
}
