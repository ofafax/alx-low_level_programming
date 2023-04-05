#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all data (n) of a linked list
 * @head: pointer to the first node of a linked list
 *
 * Return: Sum of all the data(n), 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
