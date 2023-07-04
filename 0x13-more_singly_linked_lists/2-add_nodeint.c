#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at the beginning of the listint_t list.
  *
  * @head: head of a double pointer
  * @n: int add the list
  * Return: NULL on failure
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
