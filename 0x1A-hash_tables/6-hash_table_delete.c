#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 * Return: void.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node_new, *tmp;
	unsigned long int x;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		node_new = ht->array[x];

		while (node_new != NULL)
		{
			tmp = node_new;
			node_new = node_new->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
