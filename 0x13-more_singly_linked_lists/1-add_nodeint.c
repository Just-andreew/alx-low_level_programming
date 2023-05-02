#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginnin
 * @head: pointer to first node in the list
 * @n:: one  that new node
 * Return: pointer to the new node,NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	new = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = newn;

	return (newn);
}

