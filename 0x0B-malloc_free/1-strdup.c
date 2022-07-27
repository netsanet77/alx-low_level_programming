#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: the given string
 * Return: pointer of character
 */
char *_strdup(char *str)
{
int n;
char *p;
n = strlen(str);
if (!str)
{
return (NULL);
}
p = malloc((n + 1) * sizeof(char));
if (!p)
{
	return (NULL);
}
strcpy(p, str);
return (p);
}
