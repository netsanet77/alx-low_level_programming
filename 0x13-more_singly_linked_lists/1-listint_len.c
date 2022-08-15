#include "lists.h"
/**
 * listint_len - function that returns the number of elements in list
 * @h: the given list
 * Return: the number of elements in a linked listint_t list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t no_elements = 0;

	while (h != NULL)
	{
		no_elements++;
		h = h->next;
	}
	return (no_elements);
}
