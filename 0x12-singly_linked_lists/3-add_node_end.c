#include "lists.h"
/**
 * add_node_end - adds a node at the end of a list
 * @str: string
 * Return:list
 */
int _strlen(const char *str);
char *_strdup(const char *str);
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *tmp = *head;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = _strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = _strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr;
	return (*head);
}
/**
 * _strdup - adds a node to the end of a list
 * @str: argument
 * Return: char
 */
char *_strdup(const char *str)
{
	char *dup = NULL;
	int index;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index] != '\0'; index++)
	{
		len += 1;
	}
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index] != '\0'; index++)
	{
		dup[index] = str[index];
	}
	dup[index] = '\0';
	return (dup);
}
/**
 * _strlen - calculates the length of a string
 * @str: argument
 * Return: int
 */
int _strlen(const char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		;
	}
	return (index);
}
