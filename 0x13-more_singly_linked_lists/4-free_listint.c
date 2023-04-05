#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 * @head: head of a list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *fluffy;

	while ((fluffy = head) != NULL)
	{
		head = head->next;
		free(fluffy);
	}
}
