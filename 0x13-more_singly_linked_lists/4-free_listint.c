#include "lists.h"
/**
 * free_listint - function that frees a listint_t
 * @head: the given list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		free(head);
	else
	{
		while (head->next != NULL)
		{
			free(head);
			head = head->next;
		}
		free(head);
	}
}
