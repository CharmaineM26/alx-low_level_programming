#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: always 0
 */
int main(void)
{
int limit = 1024;
int sum = 0;
int i;

for (i = 0; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("The sum of multiples of 3 or 5 below %d is: %d\n", limit, sum);
fprintf(stderr, "stderr: [Anything]\n");
return (0);
}
