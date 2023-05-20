#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of the list
 *
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *x;

	while (head != NULL)
	{
		x = head;
		head = head->next;

		free(x);
	}
}
