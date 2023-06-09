#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key to search for
 *
 * Return: associated value (success), NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idx;
	hash_node_t *item;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	item = ht->array[idx];
	for (; item; item = item->next)
		if (strcmp(item->key, key) == 0)
			return (item->value);
	return (NULL);
}
