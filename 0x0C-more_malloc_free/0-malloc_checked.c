#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - functions that allocate memory
 * @b: the size of memory allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
char *ptr = malloc(b);
if (!ptr)
{
	exit(98);
}
	return (ptr);
}
