#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a list
 * @n: paramter
 * @head: parameter
 * Return: pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *ptr = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	new_node->prev = ptr;
	return (new_node);

}
