#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i;
if (new_size == old_size)
	return (ptr);
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
if (ptr == NULL)
{
	p = malloc(new_size);
	if (!p)
		return (NULL);
}
if (old_size > new_size)
	old_size = new_size;
p = malloc(new_size);
if (!p)
	return (NULL);
for (i = 0; i < old_size; i++)
p[i] = ((char*)ptr)[i];
free(ptr);
return (p);
}
