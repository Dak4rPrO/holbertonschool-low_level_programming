#include "hash_table.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	int x = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;

	printf("{");
	if (ht != NULL)
	{
		for (; x < ht->size; x++)
		{
			node = ht->array[x]

			if (ht->array[x] != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				if (node != NULL)
					printf(", ");
			}

		}
	}
	printf("}\n");
}
