#include "lists.h"
#include <stdio.h>
/**
 * print_list -  prints all the elements of a list_t list
 * @h: the given string
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t no_nodes = 0;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		no_nodes++;
	       	
	}
	return (no_nodes);
}
