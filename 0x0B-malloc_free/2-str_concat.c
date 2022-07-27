#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - return the concatination of two strings given
 * as the parameter
 * @s1: the given string comes first after concatination
 * @s2: the last given string
 * Return: pointer of character
 */
char *str_concat(char *s1, char *s2)
{
int x, y;
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
p = malloc((x + y + 1) * sizeof(char));
if (!p)
	return (NULL);
strcpy(p, s1);
strcat(p, s2);
return (p);
}
