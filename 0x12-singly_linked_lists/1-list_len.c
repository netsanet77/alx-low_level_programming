#include "lists.h"
/**
 * list_len - return the number of elements in a linked list_t list
 * @h: the given list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		no_nodes++;
	}
	return (no_nodes);
}
