#include "lists.h"
/**
 * pop_listint - deletes the head node of a list.
 * @head: list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int new;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	new = tmp->n;
	*head = (*head)->next;
	free(tmp);
	tmp = NULL;
	return (new);
}
