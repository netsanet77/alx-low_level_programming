#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes
 * it with a specific char
 * @size: the size of the array
 * @c: the array
 * Return: pointer of character
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
if (size == 0)
return (NULL);
p = malloc(size * sizeof(char));
if (!p)
	return (NULL);
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
