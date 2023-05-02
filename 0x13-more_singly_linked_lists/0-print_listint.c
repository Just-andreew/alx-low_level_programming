#include <stdio.h>
#include "lists.h"

/**
 * print_listint - it will print the elements of the list
 * @h:pointer to head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

