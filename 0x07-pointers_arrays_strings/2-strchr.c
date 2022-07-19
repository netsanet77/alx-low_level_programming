#include "main.h"
/**
 * _strchr - locates in a string
 * @s: the given string
 * @c: the starting character
 * Return: char
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
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
if (c == '\0')
{
return (s);
}
return (0);
}
