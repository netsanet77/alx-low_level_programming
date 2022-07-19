#include "main.h"
/**
 * _strchr - locates in a string
 * @s: the given string
 * @c: the starting character
 * Return: char
 */
char *_strchr(char *s, char c)
{
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s);
}
else
{
i++;
}
}
return (NULL);
}
