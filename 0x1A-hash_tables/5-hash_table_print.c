#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: is the hash table..
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, size = 0;
	hash_node_t *hash_node_ptr = NULL;
	char *key = NULL, *value = NULL;
	int comma = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	size = ht->size;

	printf("{");
	while (i < size)
	{
		hash_node_ptr = (ht->array)[i];
		if (hash_node_ptr != NULL)
		{
			while (hash_node_ptr != NULL)
			{
				key = hash_node_ptr->key;
				value = hash_node_ptr->value;
				if (comma == 1)
					printf(", ");
				comma = 1;
				printf("'%s': '%s'", key, value);
				hash_node_ptr = hash_node_ptr->next;
			}
		}
		i++;
	}
	printf("}\n");
}
