#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * file1 - print error message if file fail
 * @file: the name of the file
 */
void file1(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %\n", file);
	exit (98);
}
/**
 * file2 - print error message
 * @file: Name of the file
 */
void file2(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit (99);
}
/**
 * closefail - print error message if file can't close
 * @fd: the file descriptor
 */
void closefail(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit (100);
}
/**
 * cp - Copy the content of a file to another file
 * @arrgv: Number of array of arguments
 * @argc: Number of counter arguments
 *
 * return: 0 on success
 */
int main(int argc, char *argv[])
{

