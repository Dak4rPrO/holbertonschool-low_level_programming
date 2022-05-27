#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @size: is the size of the array of the hash table
 * @key: is the key
 * Return: index at which the key pair should be stored in the array of the h.t
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
