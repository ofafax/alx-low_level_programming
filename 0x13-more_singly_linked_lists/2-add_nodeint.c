#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the
 * beginning of a linked list
 * @head: head of a list
 * @n: int n to be added onto a node
 *
 * Return: Address of the new element, NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	return (NULL);

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->n = n;
	*head = new;

	return (*head);
}
