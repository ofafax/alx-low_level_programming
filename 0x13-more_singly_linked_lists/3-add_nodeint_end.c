#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: head of a list
 * @n: int to add to new node
 *
 * Return: Address of new element,NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temporary;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temporary = *head;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
		while (temporary->next != NULL)
		{
		temporary = temporary->next;
		}

	temporary->next = new;
	}

	return (*head);
}
