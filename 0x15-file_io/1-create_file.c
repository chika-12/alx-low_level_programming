#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be written into the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	char *buffer;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	buffer = malloc(sizeof(char) * (strlen(text_content) + 1));
	if (buffer == NULL)
	{
		return (-1);
	}
	strcpy(buffer, text_content);
	written = write(file, buffer, strlen(buffer));
	if (written == -1)
	{
		free(buffer);
		return (-1);
	}
	free(buffer);
	close(file);
	return (1);
}
