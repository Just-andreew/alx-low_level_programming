#include "lists.h"

/**
 * listint_len - retuurns the no of elemnts
 * @h: pointer to head file
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}

