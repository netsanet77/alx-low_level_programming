#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of the string
 * @str: the given string
 * Return: void
 */
void print_rev(char *str)
{
int i, a, n;
a = strlen(str);
if (a % 2 == 0)
{
n = a / 2;
}
else
{
n = (a - 1) / 2;
}
for (i = n; i < a ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
