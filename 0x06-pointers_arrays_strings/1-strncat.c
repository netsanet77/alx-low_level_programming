#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates n bytes of one string to another
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes from source
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int i, a, j;
j = 0;
a = strlen(dest);
for (i = a; i < a + n; i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}
