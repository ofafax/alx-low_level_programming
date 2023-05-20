#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: nth node of list or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == 0)
		return (head);

	if (!head)
		return (NULL);

	for (x = 0; x < index; x++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
