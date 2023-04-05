#include "lists.h"
/**
 * free_listint_safe - print a function that frees a listint_t list
 * @head: set the head of the list to null
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	lisint_t *temp, *actual;
	size_t i;
	int rest;

	i = 0, actual = *h;

	while (actual)
	{
		rest = actual - actual->next;
		if (rest > 0)
		{
			tmp = actual->next;
			free(actual);
			actual = tmp;
			i++;
		} else
		{
			free(actual);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}


