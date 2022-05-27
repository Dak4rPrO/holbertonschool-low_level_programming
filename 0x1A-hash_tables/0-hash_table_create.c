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

	table->array = malloc(size);

	if (table->array == 0)
		free(table);
		return (NULL);

	return (table);
}
