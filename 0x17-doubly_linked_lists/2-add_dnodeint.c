#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginnning of a list
 * @head: parameter
 * @n: parameter
 * Return: Pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->next = NULL;
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;

	if (*head != NULL)
		(*head)->prev = tmp;
	*head = tmp;
	return (tmp);
}
