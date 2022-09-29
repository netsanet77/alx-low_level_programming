#include "lists.h"

/**
 * dlistint_len - function that returns the number of
 * elements of a dlistint_t list
 * @h: the given list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		no_of_nodes++;
	}
	return (no_of_nodes);
}
