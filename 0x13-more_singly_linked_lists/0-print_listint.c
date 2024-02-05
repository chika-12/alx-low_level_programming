#include "lists.h"
/**
 * print_listint - prints all element in a list
 * @h: list to be printed
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
