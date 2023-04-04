#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint - prints a function that returns the nth
 * node of a listint_t linked list
 * @head: point to the first elements
 * @index: The index of the node starting at 0
 * Return: If the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	unsigned int counter = 0;
	listint_t *temp head;

	while (temp && (counter < index))
	{
		temp = temp->next;
		counter++;

	}

	if (counter < index)
		return (NULL);

	return (temp);
}

