#include "main.h"

/**
 *times_table - print 9 timestable , starting from 0
 *
 *Return: always 0
 */

void times_table(void)
{

	int i;
	int j;
	int k;

for (i = 0 ; i <= 9 ; i++)
{
	for (j = 0 ; j <= 9 ; j++)
	{
		k = i * j;
		if (j != 0)
			_putchar(',');
		if (k < 10)
			_putchar(' ');
		else
			_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
	}
	_putchar('\n');
}
}
