#include "lists.h"
/**
 * free_listint - frees a list
 * @head: list
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}

}
