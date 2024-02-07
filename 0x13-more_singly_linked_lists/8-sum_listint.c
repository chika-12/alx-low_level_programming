#include "lists.h"
/**
 * sum_listint - return the sum of all the data in a list
 * @head: argument to function
 * Return: integer.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
