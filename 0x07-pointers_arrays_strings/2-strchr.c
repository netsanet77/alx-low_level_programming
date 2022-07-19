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
char *nstr;
j = 0;
for (i = 0;  s[i] != '\0'; i++)
{
if (s[i] == c)
{
while (s[i] != '\0')
{
nstr[j] = s[i];
j++;
i++;
}
}
}
if (s[0] == '\0')
nstr[0] = '\0';
return (nstr);
}
