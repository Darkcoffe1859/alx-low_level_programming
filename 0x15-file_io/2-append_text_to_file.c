#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the  file
 * @text_content: the terminating string to add at the end of the file
 * Return: 1 on success, and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	for (i = 0; text_content [i]; i++);
	if (i == 0)
	{
		close(fd);
		return (1);
	}

	if (write(fd, text_content, i) == -1)
	{
		return (-1);
	}
	if (close(fd) == -1)
		return (-1);
			return (1);
}
