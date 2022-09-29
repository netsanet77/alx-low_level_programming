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
	dlistint_t *temp;
	
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		free (temp);
		return (NULL);
	}

	temp->n = n;
	temp->next = (*head);
	temp->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = temp;

	(*head) = temp;
	return (*head);	
}
