#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: the given list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{

	if (*head == NULL)
	{
		free(*head);
	}

	else
	{
		while ((*head)->next != NULL)
		{
			free(*head);
			(*head) = (*head)->next;
		}
		free(*head);
	}
}
