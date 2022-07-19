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
for (i = 0;  s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s);
}
}
}
