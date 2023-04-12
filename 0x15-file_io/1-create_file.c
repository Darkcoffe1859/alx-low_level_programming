#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
/**
 * create_file - print a function that creates a file
 * @filename: the name of file to be created
 * @text_content: terminating string to write to the file
 * Return: 1 on success, and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);
	/*if text_content is NULL, an empty file should be created*/

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++);

	if (write(fd, text_content, i) == -1)
	{
		return (-1);
	}

	if (close(fd) == -1)
		return (-1);
	return (1);
}
