#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - a function that returns the number of bits
 * need to flip to get from one number to another
 * @n: unsigned long int
 * @m: the unsigned long int to flip n
 * Return: the number of flip bits to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_bit = n ^ m;
	unsigned int count = 0;

	while (flip_bit)
	{
		count++;
		flip_bit &= (flip_bit - 1);
	}
	return (count);
}

