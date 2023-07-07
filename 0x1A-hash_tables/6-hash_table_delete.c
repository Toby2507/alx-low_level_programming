#include "hash_tables.h"

/**
 * hash_table_delete - deletes an hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
		free_item(ht->array[i]);
	free(ht->array);
	free(ht);
}
