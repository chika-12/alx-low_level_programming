#include "main.h"
/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: name of file
 * @text_content: text to append
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	char *buffer = NULL;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, F_OK) != 0)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{

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
			close(file);
			return (-1);
		}

	}
	close(file);
	free(buffer);
	return (1);
}
