#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of the list_t list.
 * @head: the head of the linked list.
 * @str: the string to be stored in the list.
 * Return: the address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newest, *tpr;
	size_t numchar;

	newest = malloc(sizeof(list_t));
	if (newest == NULL)
		return (NULL);

	newest->str = strdup(str);

	for (numchar = 0; str[numchar]; numchar++)
		;

	newest->len = numchar;
	newest->next = NULL;
	tpr = *head;

	if (tpr == NULL)
	{
		*head = newest;
	}
	else
	{
		while (tpr->next != NULL)
			tpr = tpr->next;
		tpr->next = newest;
	}

	return (*head);
}
