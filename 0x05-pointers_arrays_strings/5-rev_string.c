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
char b;
a = strlen(s);
j = 0;
for (i = a - 1; s[i] != 0; i--)
{
b = s[i];
s[i] = s[j];
s[j] = b;
j++;
}
}
