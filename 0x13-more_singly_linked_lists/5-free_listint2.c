#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: the pointer to the pointer of list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{

	if (*head == NULL)
	{	
		return;
	}

	while ((*head) != NULL)
	{
		free(*head);
		(*head) = (*head)->next;
	}
	*head = NULL;
}
