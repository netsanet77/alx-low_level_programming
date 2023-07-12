#include "search_algos.h"
/**
 * binary_search - function that searchs a value using binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value search for
 *
 * Return: index where the value is located or
 *         -1 if value is not present in array of if array is NULL
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, j, left = 0, right = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = left; j <= right; j++)
		{
			if (j == left)
				printf("Searching in array: ");
			if (j != right)
				printf("%d, ", array[j]);
			else
				printf("%d\n", array[j]);
		}
		mid = (right + left) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}


