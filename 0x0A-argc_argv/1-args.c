#include <stdio.h>
#include "main.h"

/**
*main - print the numbers of arguments passed to the program
*@argv: array of arguments
*@argc: argument count
*Return: 0 always (success)
*/

int main(int argc, char *argv[])

{
(void) argv;
printf("%d\n", argc - 1);

return (0);
}
