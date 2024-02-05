#include "lists.h"
/**
 * listint_len - prints the number of element in a list
 * @h: list argument
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int count = 0;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
