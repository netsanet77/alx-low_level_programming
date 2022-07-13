#include "main.h"
#include <string.h>
/**
 * puts2 - prints a string in reverse
 * @str: the given string
 * Return: void
 */
void puts2(char *str)
{
int i, a;
a = strlen(str);
for (i = 0; i < a; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
