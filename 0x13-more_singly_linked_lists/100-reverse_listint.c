#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - print a function that revese listint_t linked list
 * @head: pointer to the head
 * Return: pointer to the first node of the reversed link
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		*(head) = next;
	}
	*head = prev;
	return (*head);
}
