#include "lists.h"

/**
 * dlistint_len - returns the num of elements in a linked dlistint_t list
 * @h: pointer to the head of list
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
