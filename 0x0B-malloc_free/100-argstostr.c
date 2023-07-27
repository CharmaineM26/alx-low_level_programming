#include "main.h"
#include <stdlib.h>

/**
*argstostr - Concatenate all args into single string
*@ac: number of arguments
*@av: array of strings contaning arguments
*Return: pointer to concatenated string
*/
char *argstostr(int ac, char **av)
{
int i, j, total_length = 0, str_index = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
if (av[i] != NULL)
{
for (j = 0; av[i][j]; j++)
total_length++;
total_length++;
}
}

str = malloc(sizeof(char) * (total_length + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
if (av[i] != NULL)
{
for (j = 0; av[i][j]; j++)
{
str[str_index] = av[i][j];
str_index++;
}
str[str_index] = '\n';
str_index++;
}
}
str[str_index] = '\0';
return (str);
}
