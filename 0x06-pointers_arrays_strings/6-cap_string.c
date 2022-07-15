#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: the given string
 * Return: character
 */
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i - 1] == ',' || s[i - 1] == ';'
|| s[i - 1] == '.' || s[i - 1] == '?'
|| s[i - 1] == '"' || s[i - 1] == '('
|| s[i - 1] == ')' || s[i - 1] == '{'
|| s[i - 1] == '}' && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 32;
}
}
return (s);
}
