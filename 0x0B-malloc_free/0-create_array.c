#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of size and assign char.
 * @size: size of the array.
 * @c: char to assign
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
