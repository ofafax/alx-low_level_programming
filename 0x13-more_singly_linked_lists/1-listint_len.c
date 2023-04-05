#include "lists.h"

/**
 * listint_len - Function that returns the no of elements in
 * a linked list
 * @h: a pointer to the 1st node
 *
 * Return: Number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t stuff = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n != '\0')
			stuff++;

		h = h->next;
	}
	return (stuff);
}
