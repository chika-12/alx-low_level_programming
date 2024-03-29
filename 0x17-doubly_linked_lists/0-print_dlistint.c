#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: parameter
 * Return: always(0)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr;

	if (h == NULL)
	{
		return (count);
	}
	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count += 1;
		ptr = ptr->next;
	}
	return (count);
}

