#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - print function that deletes the head node
 * of a lisint_t linked list
 * returns the head nodes data(n)
 * @head: point to the address of the head
 * Return: if the linked list is empty 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = (*head)->next;
	tmp->next = NULL,

	free(tmp);

	return (data);
}


