#include "lists.h"
/**
 * free_listint2 - frees a list.
 * @head: list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *node;

	if (*head == NULL || head == NULL)
		return;

	while (ptr != NULL)
	{
		node = ptr->next;
		free(ptr);
		ptr = node;
	}
	/*head = NULL;*/
}
