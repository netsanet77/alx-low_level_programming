#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: the given node
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int i = (*head)->n;

	if (*head == NULL)
		return (0);
	(*head) = (*head)->next;
	return (i);
}
