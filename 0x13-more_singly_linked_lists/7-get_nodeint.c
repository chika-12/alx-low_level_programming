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
	for (idx = 0; (idx < index) && (head->next); idx++)
	{
		head = head->next;
		idx++;
	}
	if (idx < index)
	{
		return (NULL);
	}
	return (head);
}
