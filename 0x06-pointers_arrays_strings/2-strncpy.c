#include "main.h"
/**
 * _strncpy - copies n bytes of one string to another
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes from source
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
