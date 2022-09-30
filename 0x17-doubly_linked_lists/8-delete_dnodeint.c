#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * @head: given list
 * @index: the index of the node that should be deleted (starts at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int node_no = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (node_no < index - 1)
		{
			temp = temp->next;
			node_no++;
		}
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	if (temp->next->next != NULL)
	{
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
		return (1);
	}
	else
	{
		free(temp->next);
		temp->next = NULL;
		return (1);
	}
	return (-1);
}
