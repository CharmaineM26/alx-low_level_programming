#include "main.h"
#include <stdio.h>

/**
*_atoi - converts a string to an integer
*@s: the string to convert
*Return: the converted string
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
*main - prints min no. of coints to make change
*@argv: argument array
*@argc: argument count
*Return: 0 always (success) else 1
*/
int main(int argc, char *argv[])
{
int num, j, result;
int coins[] = {25, 10, 5, 2, 1};


if (argc != 2)
{
printf("Error\n");
return (1);
}

num = _atoi(argv[1]);
result = 0;

if (num < 0)
{
printf("0\n");
return (0);
}
for (j = 0; j < 5 && num >= 0; j++)
{
while (num >= coins[j])
{
result++;
num -= coins[j];
}
}
printf("%d\n", result);
return (0);
}
