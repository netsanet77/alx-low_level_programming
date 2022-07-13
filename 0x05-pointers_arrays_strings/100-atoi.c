#include "main.h"
#include <string.h>
/**
 * _atoi - convert a string to an integer
 * @s: the given string
 * Return: int
 */
int _atoi(char *s)
{
int i, sign;
unsigned int result = 0;
sign = 1;
for (i = 0; i < strlen(s); i++)
{
if (s[i] <= 9 && s[i] >= 0)
{
result = result * 10 +(s[i] + '0');
}
else if (s[i] == '-')
{
sign = sign * (-1);
}
}
return (sign *result);
}
