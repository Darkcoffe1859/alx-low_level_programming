#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - print a functiom that listint_t
 * @head: Pointer to the head
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)

	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
