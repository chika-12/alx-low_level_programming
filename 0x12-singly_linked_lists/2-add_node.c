#include "lists.h"
/**
 * add_node -adds node to the begining of the list
 * @str: argument
 * Return: int
 */
int _strlen(const char *str);
char *_strdup(const char *str);
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;

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

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
/**
 * _strdup - Duplicates a string
 * @str: argument
 * Return: char
 */
char *_strdup(const char *str)
{
	int index;
	int len = 0;
	char *dup = NULL;

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
 * _strlen - prints the length of a string
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
