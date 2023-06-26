/**
*swap_int - swap values of two integers
*@a: first integer
*@b: second integer
*Return: new values of a and b
*/

void swap_int(int *a, int *b)

{
int c = *a;
*a = *b;
*b = c;
}
