#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table to be added or updated
 * @key: the key (cannot be an empty string)
 * @value: value associated with the key
 * Return: 1 on suceess and 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash;
	int index;

	new_hash = malloc(sizeof(hash_node_t));
	if (new_hash == NULL)
		return (0);

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	new_hash = ht->array[index];

	while (new_hash != NULL)
	{
		if (strcmp(new_hash->key, key) == 0)
		{
			free(new_hash->value);
			new_hash->value = strdup(value);
			return (1);
		}

		new_hash = new_hash->next;
	}

	new_hash->key = strdup(key);
	new_hash->value = strdup(value);
	new_hash->next = ht->array[index];
	ht->array[index] = new_hash;

	return (1);
}
