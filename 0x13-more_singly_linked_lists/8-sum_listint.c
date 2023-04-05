#include "lists.h"
/**
 * sum_listint - print a function that returns the data(n)
 * of a listint_t linked list
 * @head: The sum of data(n)
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

