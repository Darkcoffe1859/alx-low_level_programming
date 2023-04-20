#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file & prints it to POSIX
 * standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read & print
 *
 * Return: Number of letters read & printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nread;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[nread] = '\0';
	nread = write(STDOUT_FILENO, buffer, nread);
	if (nread == -1 || (size_t)nread != letters)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (nread);
}
