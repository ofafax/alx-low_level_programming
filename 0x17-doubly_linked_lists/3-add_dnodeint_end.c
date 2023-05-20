#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head of the node
 * @n: element to be added
 *
 * Return: address of the new element || NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newest;
	dlistint_t *tmp;

	newest = malloc(sizeof(dlistint_t));

	if (newest == NULL)
		return (NULL);

	newest->n = n;
	newest->next = NULL;

	if (*head == NULL)
	{
		newest->prev = NULL;
		*head = newest;
	}

	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newest;
		newest->prev = tmp;
	}

	return (newest);
}
