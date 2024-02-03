#include "lists.h"
/**
 * list_len - prints the length of the string
 * @h: string argument to function
 * Return: integer value
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}
	else
	{
		while (h != NULL)
		{
			count += 1;
			h = h->next;
		}
	}
	return (count);
}
