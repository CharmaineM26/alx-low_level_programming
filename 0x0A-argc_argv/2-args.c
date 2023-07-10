#include <stdio.h>
#include "main.h"

/**
*main - print all arguments it receives
*@argv: array of arguments
*@argc: argument count
*Return: 0 always (success)
*/

int main(int argc, char *argv[])

{
int i;

for (i = 0 ; i < argc ; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
