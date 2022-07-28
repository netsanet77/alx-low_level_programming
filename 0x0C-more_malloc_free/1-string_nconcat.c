#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string in the concatenation
 * @s2: the last string in the concatenation
 * @n: number of bytes of s2 in the conncatenaion
 *
 * Return: character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y;
char *p;
if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
x = strlen(s1);
y = strlen(s2);
if (n >= y)
{
	n = y;
}
p = malloc((x + n + 1) * sizeof(char));
if (!p)
{
return (NULL);
}
strcpy(p, s1);
strcat(p, s2);
return (p);
}

