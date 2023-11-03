#include "hash_tables.h"

/**
 * key_index - Get index at which a key/value
 *      pair should be kept in array of a hash table.
 * @key: The key.
 * @size: size of the array
 *
 * Return: Index of the key.
 * Description: Utilizes the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
