#include <stdio.h>
#include "main.h"

/**
 *main - prints the name of the program
 *@argc: argument count
 *@@argv: array of arguments
 *Return: always 0 (success)
 */

int main(int argc __attribute__((unused))_, char *argv[])
{
  printf("name of program is: %s\n", *argv);

  return(0);
}
