#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the lists head
 * @n: element to be added to the beginning of the list
 *
 * Return: address of the new element or  NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newest;

	newest = malloc(sizeof(dlistint_t));

	if (newest == NULL)
		return (NULL);

	newest->n = n;
	newest->prev = NULL;
	newest->next = *head;

	if (*head != NULL)
		(*head)->prev = newest;

	*head = newest;

	return (newest);
}
