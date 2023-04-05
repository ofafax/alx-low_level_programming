#include "lists.h"

/**
 *free_listint2 - function that frees a linked list and sets the head to NULL
 *@head: head of a list
 *
 *Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *new;

	if (head != NULL)
	{
		current = *head;
		while ((new = current) != NULL)
		{
			current = current->next;

			free(new);
		}

	*head = NULL;
	}
}
