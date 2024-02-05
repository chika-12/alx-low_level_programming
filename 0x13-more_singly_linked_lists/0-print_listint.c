#include "lists.h"
/**
 * print_listint - prints all element in a list
 * @h: list to be printed
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		count += 1;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
