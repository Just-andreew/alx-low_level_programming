#include "hash_tables."

/**
 * key_index - gives the index of a key
 * @key: key well get an index for
 * @size: size of hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
