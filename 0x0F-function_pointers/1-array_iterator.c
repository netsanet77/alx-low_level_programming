#include "function_pointers.h"
#include <stdlib.hi>
/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: the given array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL)
{
	for (i = 0; i < size; i++)
		action(array[i]);
}
}
