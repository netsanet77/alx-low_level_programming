#include "main.h"
/**
 * _strlen_recusion - returns the length of a string
 * @s: the given string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i++;
s++;
_strlen_recursion(s);
}
else 
{
return (i);
}
return (i);
}
