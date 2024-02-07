#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a given position
 * @head: linked list
 * @idx: index
 * @n: new value to be added;
 * Return: head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;
	listint_t *ptr2 = *head;
	unsigned int index = 0;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}

	while (index < idx - 1 && ptr2 != NULL)
	{
		ptr2 = ptr2->next;
		idx++;
	}
	if (ptr2 == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = ptr2->next;
	ptr2->next =  ptr;
	return (*head);
}
