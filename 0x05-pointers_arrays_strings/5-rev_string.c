#include "main.h"
#include <string.h>
/**
 * rev_string - reverse the string
 * @s: the given string
 * Return: void
 */
void rev_string(char *s)
{
int i, j, a;
a = strlen(s);
char b[a];
j = 0;
for (i = a - 1; s[i] != 0; i--)
{
b[j] = s[i];
}
strcpy(s, b);
}
