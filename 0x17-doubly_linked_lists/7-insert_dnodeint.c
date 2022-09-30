#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node a given position
 * @h: the original list
 * @idx: index of the list where the new node should be added(it starts at 0)
 * @n: new node
 *
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int node_no = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (temp->next == NULL && node_no == (idx - 1))
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		else if (node_no == (idx - 1))
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		node_no++;
		temp = temp->next;
	}
	return (NULL);
}
