#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - print a function that adds a new node
 * at the end of a listint_t list
 * @n: new elements data
 * @head: pointer to a pointer to head
 * Return: address of new element, NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else

	{
		temp = *head;

		while (temp->next != NULL)

		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
