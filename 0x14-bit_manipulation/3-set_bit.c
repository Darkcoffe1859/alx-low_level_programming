#include "main.h"
#include <stdio.h>
/**
 * set_bit - print a function that sets the value
 * of a bit to 1 at a given index
 * @index: the bit to set starting from 0
 * @n: the value of unsigned int to be evaluated
 * Return: if it worked 1, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int y = -1;

	if (sizeof(n) * 8 < index)
		return (-1);
	y <<= index;
	*n |= y;
	return (1);
}
