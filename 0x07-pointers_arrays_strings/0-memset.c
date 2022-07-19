#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the pointer that points the memory area
 * @b: the value that fills the memory
 * @n: the first n bytes of memory
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
