#include "hash_tables.h"

/**
 * free_item - free item
 * @item: item to be freed
 */
void free_item(hash_node_t *item)
{
	hash_node_t *next = NULL;

	for (; item; item = next)
	{
		next = item->next;
		free(item->key);
		free(item->value);
		free(item);
	}
}

/**
 * create_item - create new item
 * @key: key
 * @value: value
 *
 * Return: new item
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (NULL);
	item->key = strdup(key);
	if (!item->key)
	{
		free_item(item);
		return (NULL);
	}
	item->value = strdup(value);
	if (!item->value)
	{
		free_item(item);
		return (NULL);
	}
	item->next = NULL;
	return (item);
}

/**
 * handle_collision - handle key index collision
 * @ht: hash table
 * @idx: index under review
 * @item: item under review
 */
void handle_collision(hash_table_t *ht, unsigned long idx, hash_node_t *item)
{
	hash_node_t *curr = ht->array[idx];

	while (curr)
	{
		if (strcmp(curr->key, item->key) == 0)
		{
			free(curr->value);
			curr->value = strdup(item->value);
			free_item(item);
			return;
		}
		curr = curr->next;
	}
	item->next = ht->array[idx];
	ht->array[idx] = item;
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: new item's key
 * @value: new item's value
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	hash_node_t *item, *curr;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx];
	item = create_item(key, value);
	if (item == NULL)
		return (0);
	if (curr == NULL)
		ht->array[idx] = item;
	else if (strcmp(curr->key, key) == 0)
	{
		free_item(item);
		free(curr->value);
		ht->array[idx]->value = strdup(value);
	}
	else
		handle_collision(ht, idx, item);
	return (1);
}
