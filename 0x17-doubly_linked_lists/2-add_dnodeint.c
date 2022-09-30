#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: the head of the list
 * @n: the new element to be added
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	temp = *head;
	new_node->next = temp;
	temp->prev = new_node;
	*head = new_node;
	return (new_node);
}
