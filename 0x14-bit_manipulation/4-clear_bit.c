#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: value of bit to set
 * @n: unsigned long int
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 32)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
