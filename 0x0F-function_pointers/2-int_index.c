#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the given array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: -1, when no element matches or size <= 0
 * the index of the first element for which the cmp function
 * does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
	return (-1);
if (array != NULL && cmp != NULL)
{
for (i = 0; i <= size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);
}
}
return (-1);
}
