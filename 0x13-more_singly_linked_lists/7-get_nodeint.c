#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nth node of a linked list
 * @head: first node of a linked list
 * @index: index of the node starting at 0
 *
 * Return: Node at nth index or NULL if node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
