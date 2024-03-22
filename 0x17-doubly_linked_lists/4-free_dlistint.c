#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: parameter
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
	{
		free(head);
	}
	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
