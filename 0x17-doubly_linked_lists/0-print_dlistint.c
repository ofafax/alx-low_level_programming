#include "lists.h"

/**
 *  print_dlistint - prints all the elements of dlistint_t list
 *  @h: pointer to the head of list
 *
 *  Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
