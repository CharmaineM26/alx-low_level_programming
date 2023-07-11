#include "main.h"
#include <stdio.h>

/**
*_atoi - converts a string to an integer
*@s: the string to convert
*Return: the converted integer
*/

int _atoi(char *s)
{
int result, sign, i;
result = 0;
sign = 1;
i = 0;

if (s[0] == '-')
{
sign = -1;
i++;
}

for (; s[i] != '\0'; i++)
{
result = result * 10 + (s[i] - '0');
}
return (sign *result);
}

/**
* main - program that adds positive numbers
*@argv: argument array
*@argc: argument count
*Return: result of addition
*/

int main(int argc, char *argv[])

{

int result = 0;
int i; 

if (argc == 1)

{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int num = _atoi(argv[i]);

if (num < 0)
{
printf("Error\n");
return (1);
}

result += num;
}
printf("%d\n", result);

return (0);
}
