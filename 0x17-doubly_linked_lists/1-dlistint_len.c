#include "lists.h"
/**
 * dlistint_len - finds the length of a list
 * @h: the head poiter
 * Return: len
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	if (h == NULL)
	{
		return (EXIT_FAILURE);
	}
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
