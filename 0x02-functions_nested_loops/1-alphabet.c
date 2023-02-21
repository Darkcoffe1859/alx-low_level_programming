#include "1-alphabet.c"

/**
  * print_alphabet - Make the alphabet
  *
  * Return: Always 0.
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
