#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print a function that returns the number of elements
 * @h: Head of a list
 * Return: Number of nodes (integer)
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
