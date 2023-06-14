#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to be looked into
 * @key: key being looked for
 * Return: value associated with the element or
 * NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	
	index = 0;

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
		return (NULL);

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
