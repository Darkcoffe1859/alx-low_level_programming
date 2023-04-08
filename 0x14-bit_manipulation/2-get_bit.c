#include "main.h"
#include <stdio.h>
/**
 * get_bit - function that returns value of a bit at a given index
 * @index: starting from 0
 * @n: unsigned long int
 * Return: value of bit or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
	return (-1);

	if (n == 0)
	return (0);
	n = n >> index;

	if ((n & 1) != 0)
	return (1);

	return (0);

}	
