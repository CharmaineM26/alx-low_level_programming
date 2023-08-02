#include "lists.h"

/**
*print_listint - prints all the elements of a linked list
*@h: linked list of type listint_t to print
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
int num_digits = 0;
int temp = h->n;

if (temp == 0)
{
num_digits = 1;
}
else
while (temp != 0)
{
num_digits++;
temp /= 10;
}
}

if (h->n < 0)

{
putchar('_');
num_digits--;
h->n = -(h->n);
}
for (int i = num_digits - 1; i >= 0; i--)
{
int digit = (h->n / pow(10, i)) % 10;
putchar(digit + '0');
}
putchar('\n');
num++;
h = h->next;
}
return (num);
}
