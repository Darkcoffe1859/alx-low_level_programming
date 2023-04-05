#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint - print a function that delete the node at index
 * index of a listint_t linked list
 * @index: index of the node to be deleted
 * @head: pointer to pointer to the head
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *next;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index -1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next;

	free(temp->next);
	temp->next = next;
	return (1);
}
