#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints a binary representation of number
 * @n: unsigned int
 */
void print_binary(unsigned long int n)
{

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar('0' + (n & 1));

}
