#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int a;
long b;
float c;
char d;
long long e;

printf("Size of int = %zu bytes\n", sizeof(a));
printf("Size of long = %zu bytes\n", sizeof(b));
printf("Size of float = %zu bytes\n", sizeof(c));
printf("Size of char = %zu bytes\n", sizeof(d));
printf("Size of long long = %zu bytes\n", sizeof(e));
}
