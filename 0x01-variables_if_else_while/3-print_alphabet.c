#include <stdio.h>

/**
 * main - prints alpha in both lower and upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	return (0):
}
