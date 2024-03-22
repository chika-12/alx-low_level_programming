#include "lists.h"
/**
 * get_dnodeint_at_index - get the node of a list at the given index
 * @head: parameter
 * @index: index of node to be printed
 * Return: pointer
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	dlistint_t *tmp = NULL;
	size_t count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while ((ptr = head) != NULL)
	{
		if (count == index)
		{
			tmp = ptr;
		}
		head = head->next;
		count += 1;
	}
	if (!tmp)
	{
		return (NULL);
	}
	return (tmp);
}

