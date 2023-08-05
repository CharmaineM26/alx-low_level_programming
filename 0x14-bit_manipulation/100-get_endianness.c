#include "main.h"

/**
*get_endianness - checks the endianness of a machine
*Return: 0 if big endian else 1 if little endian
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
}
