#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: the given string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else if (*(s + 1) != '\0')
{
_print_rev_recursion(s + 1);
}
else
{
_putchar(*s);
_print_rev_recursion(s-1);
}
}
