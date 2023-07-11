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
* main - program that multiplies two numbers
*@argv: argument array
*@argc: argument count
*Return: 0 (success) else 1
*/

int main(int argc, char *argv[])

{

int num1, num2, result;

if (argc != 3)

{
printf("Error\n");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);

result = num1 *num2;

{
printf("%d\n", result);
}
return (0);
}
