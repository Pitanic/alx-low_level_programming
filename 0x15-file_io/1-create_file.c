#include "main.h"

/**
 * _strlen - this reurns the length of a string
 * @s: strings length to be checked
 * Return: integer string length
 */

int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}

/**
 * create_file - this creates a file
 * @filename: file name to be created
 * @text_content: text to write
 * Return: 0 on failure and 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
