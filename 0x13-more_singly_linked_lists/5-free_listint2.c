#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - print a function that free listint_t list
 * @head: a pointer to a pointer to a head
 * Return: nothong
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
