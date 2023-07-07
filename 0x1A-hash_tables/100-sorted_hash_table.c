#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table
 * @size: size of table
 *
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));
	unsigned long i;

	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * order_node - orders nodes into the sorted linked list
 * @ht: hash table
 * @node: node under review
 */
void order_node(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (!ht->shead)
	{
		node->snext = NULL, node->sprev = NULL;
		ht->shead = node, ht->stail = node;
	}
	else if (strcmp(ht->shead->key, node->key) > 0)
	{
		node->snext = ht->shead, node->sprev = NULL;
		ht->shead->sprev = node, ht->shead = node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext && strcmp(temp->snext->key, node->key) < 0)
			temp = temp->snext;
		node->sprev = temp, node->snext = temp->snext;
		if (!temp->snext)
			ht->stail = node;
		else
			temp->snext->sprev = node;
		temp->snext = node;
	}
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: new item's key
 * @value: new item's value
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[idx]; node; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value), node->value = strdup(value);
			return (1);
		}
	}
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key), free(node);
		return (0);
	}
	node->next = ht->array[idx], ht->array[idx] = node;
	order_node(ht, node);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key to search for
 *
 * Return: associated value (success), NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long idx;
	shash_node_t *item;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	item = ht->array[idx];
	for (; item; item = item->next)
		if (strcmp(item->key, key) == 0)
			return (item->value);
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->shead;
	while (node)
	{
		if (ht->shead != node)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->stail;
	while (node)
	{
		if (ht->stail != node)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes an hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr, *next;

	if (ht == NULL)
		return;
	curr = ht->shead;
	for (; curr; curr = next)
	{
		next = curr->snext;
		free(curr->key);
		free(curr->value);
		free(curr);
	}
	free(ht->array);
	free(ht);
}
