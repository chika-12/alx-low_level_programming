#include "main.h"
/**
 * read_textfile - a function that reads a text file a prints it to
 * posix standard output
 * @filename: name of file
 * @letters: number of characters
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	ssize_t written;
	char *buffer = NULL;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		close(file);
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	bytes = read(file, buffer, letters);
	if (bytes <= 0)
	{
		close(bytes);
		free(buffer);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, bytes);
	if (written < 0 || bytes != written)
	{
		close(written);
		free(buffer);
		return (0);
	}
	close(file);
	free(buffer);
	return (written);
}
