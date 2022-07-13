#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the given string
 * Return: int
 */
int _atoi(char *s)
{
int i, sign;
sign = 1;
unsigned int result = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] <= 9 && s[i] >= 0)
{
result = result * 10 + s[i];
}
else
{
if (s[i] == '-')
{
sign = sign * (-1);
}
}
}
return (sign *result);
}
