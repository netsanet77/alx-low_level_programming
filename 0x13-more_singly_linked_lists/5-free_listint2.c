#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: the pointer to the pointer of list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *free_head;

	if (*head == NULL)
	{	
		return;
	}

	while ((*head) != NULL)
	{
		free_head = *head;
		(*head) = (*head)->next;
		free(free_head);
	}
	*head = NULL;
}
