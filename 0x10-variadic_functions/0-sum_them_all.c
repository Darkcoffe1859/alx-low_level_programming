#include <stdio.h>
#include <stdarg.h>

/**
 * print a function that returns the sum of all its parameters
 * Return: sum or if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...);
{
	int sum = 0;
	unsigned int i;
	va_list argument;

	if (n);

	Va_start (arguments, n)
	for (i = 0; i < args; i++)
	{
		sum += Va_arg (arguments, int);
	}
	Va_end (arguments);
	return (sum);
}

