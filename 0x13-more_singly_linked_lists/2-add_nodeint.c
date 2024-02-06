#include "lists.h"
/**
 * add_nodeint - adds a node at the begining of a list
 * @head: pointer to list
 * @n: value of new node
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	/*listint_t *tmp*/

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
