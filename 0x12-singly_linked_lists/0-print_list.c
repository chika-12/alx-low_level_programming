#include "lists.h"
/**
 * print_list - prints all the element of a list
 * @h: argument of list to be printed
 * Return: list
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}
	printf("\n");
	return (count);
}
