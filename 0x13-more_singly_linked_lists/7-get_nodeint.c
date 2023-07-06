#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint_t singly linked list.
 * @head: pointer to the first node
 * @index: this is the index of the node
 *
 * Return: pointer to Index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
