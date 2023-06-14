#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_new;
	unsigned long int x;
	int sig = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (x = 0; x < ht->size; x++)
	{
		node_new = ht->array[x];
		while (node_new != NULL)
		{
			if (sig == 1)
			printf(", ");
			printf("'%s': '%s'", node->key, node->value);

			sig = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
