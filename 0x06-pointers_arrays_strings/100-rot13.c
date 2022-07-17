#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the given string
 * Return: char
 */
char *rot13(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] <= 'Z' && s[i] >= 'A'))
{
if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
{
s[i] = s[i + 13];
else
{
s[i] = s[i - 13];
}
}
}
return (s);
}
