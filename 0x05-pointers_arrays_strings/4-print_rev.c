#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: the given string
 * Return: void
 */
void print_rev(char *s)
{
int i, a;
a = strlen(s);
for (i = a-1; s[i] != 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
