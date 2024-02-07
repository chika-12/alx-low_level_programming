#include "lists.h"
/**
 * pop_listint - deletes the head node of a list.
 * @head: list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int new  = tmp->n;

	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	free(tmp);
	tmp = NULL;
	return (new);
}
