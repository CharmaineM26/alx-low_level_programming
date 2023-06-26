/**
*_strlen - returns length of string
*@s: string's length to be computed
*Return: length of string
*/
int _strlen(const char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
