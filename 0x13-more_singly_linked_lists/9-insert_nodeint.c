#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint - print a function that insert new nodes at a given position
 * @head: pointer to a pointer to head
 * @idx: index to the list where the new node should be added
 * @index: the index starts at 0
 * @n: element to insert
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *newnode;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx - 1; i++)

	{
	temp = temp->next;
	if (temp == NULL)
	{
		return (NULL);
	}
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}


