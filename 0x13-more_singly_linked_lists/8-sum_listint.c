#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - print a function that returns the data(n)
 * of a listint_t linked list
 * @head: The sum of data(n)
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (*head == NULL)
		return (0);
	temp == head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

