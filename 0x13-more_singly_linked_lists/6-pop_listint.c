#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: the given node
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *pop_node = *head;
	int i = pop_node->n;

	if (*head == NULL)
		return (0);
	(*head) = (*head)->next;
	free(pop_node);
	return (i);
}
