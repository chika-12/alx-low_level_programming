#include "lists.h"
/**
 * sum_dlistint - sums all the elements in a list
 * @head: parameter
 * Return: integer
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = NULL;

	if (head == NULL)
	{
		return (sum);
	}
	ptr = head;

	while ((ptr = head) != NULL)
	{
		sum += ptr->n;
		head = head->next;
	}
	return (sum);
}
