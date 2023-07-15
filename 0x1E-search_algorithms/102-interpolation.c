#include "search_algos.h"

/**
 * interpolation_search - the function that searches for a value in a sorted
 * array of integers using interpolation search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 *         -1 if array is NULL or if value is not present in array
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array[high] < value)
	{
		pos = low + ((double)(high - low) / (array[high] - array[low])) * (value -
				array[low]);
		printf("Value checked array[%ld] is out of range\n", pos);
	}
	while ((array[high] != array[low]) && (value <= array[high]) &&
			(value <= array[high]))
	{
		pos = low + ((double)(high - low) / (array[high] - array[low])) * (value -
				array[low]);
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] > value)
		{
			high = pos - 1;
		}
		else
		{
			low = pos + 1;
		}
	}
	return (-1);
}
