#include "lists.h"
/**
 * add_node - adds a new node at the start
 * of a list_t list.
 * @head: head of the linked list
 * @str: string used to store in the list.
 * Return: address of the head of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *latest;
	size_t numchar;

	latest = malloc(sizeof(list_t));
	if (latest == NULL)
		return (NULL);

	latest->str = strdup(str);

	for (numchar = 0; str[numchar]; numchar++)
		;

	latest->len = numchar;
	latest->next = *head;
	*head = latest;

	return (*head);
}
