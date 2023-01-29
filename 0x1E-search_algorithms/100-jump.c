#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @value: the value to search for
 * @size: the number of elements in array
 * Return: the first index where value is located or
 *        -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, min = sqrt(size);

	for (i = 0; i < size; i += min)
	{
		if (array[i]  < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
		else
			break;
	}

	if (i != 0)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", i - min, i);
		for (j = i - min; j <= i && j < size; j++)
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			if (array[j] == value)
			{
				return (j);
			}
		}
	}
	else
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	return (-1);
}
