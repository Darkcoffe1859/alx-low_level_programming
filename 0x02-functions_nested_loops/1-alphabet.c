#include "main.h"

/**
 *print_alphabet - check the code for the ALX school students
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;
	}
	_putchar('\n');
}
