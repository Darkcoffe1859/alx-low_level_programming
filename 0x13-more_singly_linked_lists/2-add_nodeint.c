#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - print a function that adds a new node at the beginning
 * @n: nodes int the listint_t
 * @head: the first node of list
 * Return: The address of the new element, or null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead = malloc(sizeof(listint_t));

	if (new_head == NULL)

		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}

