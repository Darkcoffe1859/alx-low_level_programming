#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of a singly linked list
 * @h: pointer to a list
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
