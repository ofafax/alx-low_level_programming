#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position
 * @head: head of a linked list
 * @idx: index of the list where new node should be added, begins at 0
 * @n: integer
 *
 * Return: Address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *temp;

	temp = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && temp != NULL; x++)
		{
			 temp = temp->next;
		}
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;

		*head = new;
	}
	else
	{
		new->next = temp->next;

		temp->next = new;
	}

	return (new);
}

