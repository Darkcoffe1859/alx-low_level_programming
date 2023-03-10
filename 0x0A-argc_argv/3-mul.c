#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[3]));
	return (0);
}
