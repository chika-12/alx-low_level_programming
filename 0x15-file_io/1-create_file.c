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
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREATb | O_TRUNC | O_RDWR, 0600);
	if (file < 0)
	{
		close(file);
		return (-1);
	}
	if (text_content != NULL)
	{
		buffer = malloc(sizeof(char) * (strlen(text_content) + 1));
		if (buffer == NULL)
		{
			close(file);
			free(buffer);
			return (-1);
		}

		strcpy(buffer, text_content);
		bytes_written = write(file, buffer, strlen(text_content));
		if (bytes_written == -1)
		{
			close(bytes_written);
			free(buffer);
			return (-1);
		}
	}
	close(file);
	free(buffer);
	return (1);

}
