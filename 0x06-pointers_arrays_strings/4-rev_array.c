#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the given array
 * @n: the number of elements of the array
 * Retern: nothing
 */
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; a[i] != '\0'; i++)
{
temp = a[n - 1];
a[n - 1] = a[i];
a[i] = temp;
n--;
}
}
