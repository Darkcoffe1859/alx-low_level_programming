#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - print a function that adds a new node at the beginning
 * @n: nodes int the listint_t
 * @head: the first node of list
 * Return: The address of the new element, or null 
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
	newnode = *head;
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)

		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

