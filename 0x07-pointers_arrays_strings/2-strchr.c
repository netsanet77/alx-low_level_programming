#include "main.h"
/**
 * _strchr - locates in a string
 * @s: the given string
 * @c: the starting character
 * Return: char
 */
char *_strchr(char *s, char c)
{
int i, j;
char tmp;
char *a;
i = 0;
j = 0;
while (s[i - 1] != c || i = 0)
{
if (s[i] == c)
{
while (s[i] != '\0')
{
a[j] = s[i];
i++;
j++;
}
}
}
return (s);
}
