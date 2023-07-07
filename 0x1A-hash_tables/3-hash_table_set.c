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
	if (strlen(key) == 0)
	{
		free(item);
		return (NULL);
	}
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

	while (curr->next && strcmp(curr->key, item->key))
		curr = curr->next;
	if (strcmp(curr->key, item->key) == 0)
	{
		strcpy(curr->value, item->value);
		free_item(item);
	}
	else
		curr->next = item;
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
	unsigned long idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *item = create_item(key, value), *curr = ht->array[idx];

	if (item == NULL)
		return (0);
	if (curr == NULL)
		ht->array[idx] = item;
	else if (strcmp(curr->key, key) == 0)
	{
		free_item(item);
		strcpy(ht->array[idx]->value, value);
	}
	else
		handle_collision(ht, idx, item);
	return (1);
}
