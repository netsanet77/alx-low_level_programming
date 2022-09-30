#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list
 * @head: the given list
 * @index: the given index for required node
 *
 * Return: the nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_no = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (node_no == index)
			return (head);
		node_no++;
		head = head->next;
	}
	return (NULL);
}
