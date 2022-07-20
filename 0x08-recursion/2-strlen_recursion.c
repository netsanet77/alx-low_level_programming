#include "main.h"
/**
 * _strlen_recusion - returns the length of a string
 * @s: the given string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
