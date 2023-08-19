#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string lenght to be checked
 * Return: integer lenght of the string
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
 * append_text_to_file - appends text to a file
 * @filename: name of the file to be created
 * @text_content: text to write
 * Return: 0 if failed and 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}		
