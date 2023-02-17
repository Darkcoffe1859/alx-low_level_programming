#include <stdio.h>
/**
 * main - the program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	print("size of a char: %lu byte(s)\n", sizeof (char));
	print("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int:n%lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
