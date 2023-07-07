#include "hash_tables.h"

/**
 * key_index - computes the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long idx = hash_djb2(key);

	return (idx % size);
}
