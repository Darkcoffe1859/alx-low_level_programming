#include <stdlib.h>
#include "main.h"
#include <stio.h>
#include <unistd.h>
/**
 * read_textfile - Read, prints textfile to a POSIX standard output
 * @letters: amount of letters to read and print
 * Return: actual amount of letters it could read and print
 * @filename: name of the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars_read, chars_written;

	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	chars_read = read(fd, buf, letters);
	if (char_read == -1)
		return (0);
	chars_written = write(STDOUT_FILENO, buf chars_read);

	if (chars_written == -1)
		return (0);
	close(fd);
	free(buf);
	return (chars_written);
}
