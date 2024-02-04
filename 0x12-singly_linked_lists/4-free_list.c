#include "lists.h"
/**
 * free_list - frees a list
 * @head: linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
