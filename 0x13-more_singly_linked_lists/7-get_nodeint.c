#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at nth index
 * @head: list
 * @index: node to return
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (idx < index)
	{
		head = head->next;
		idx++;
	}
	return (head);
}

