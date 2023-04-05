#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a linked
 * list
 * @head: head of a linked list
 *
 * Return: the head nodes data (n)
 */

int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *i, *current;

	if (*head == NULL)
		return (0);

	current = *head;

	head_node = current->n;

	i = current->next;

	free(current);

	*head = i;

		return (head_node);
}
