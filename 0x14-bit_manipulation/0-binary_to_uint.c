#include "main.h"
#include <stdio.h>
/**
 * binary_to_unit - print a function that converts a binary
 * binary number to an unsigned int
 * @b: pointing to 0 and 1 chars
 * Return: the converted number
 * or 0 if there is one more number in the string that is neither 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
		int i;
	unsigned int converted_value = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{

		if (b[i] < '0' || b[i] > '1')
			return (0);
		converted_value = converted_value * 2 + (b[i] - '0');
	}
	return (converted_value);
}




