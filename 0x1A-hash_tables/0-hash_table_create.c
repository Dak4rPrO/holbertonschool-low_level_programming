#include "hash_tables.h"

/**
 * hash_table_create - hash table
 * @size: size is the size of the array
 * Return: always table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL || size == 0)
		return (NULL);

	table->size = size;

	table->array = malloc(size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
