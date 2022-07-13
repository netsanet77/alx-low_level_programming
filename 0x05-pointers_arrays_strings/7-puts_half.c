#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: the given string
 * Return: void
 */
void puts_half(char *str)
{
int a, i, n;
a = strlen(str);
if (a % 2 != 0)
{
n = (a - 1) / 2;
}
else
{
n =  a / 2;
}
for (i = n; i < a; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
