#include "hash_tables.h"

/**
 * hash_table_delete - function that prints a hash table.
 *
 * @ht: is the hash table..
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0, size = 0;
	hash_node_t *hash_node_ptr, *last_ptr = NULL;

	if (ht == NULL || ht->array == NULL)
		return;

	size = ht->size;

	while (i < size)
	{
		last_ptr = NULL;
		hash_node_ptr = (ht->array)[i];
		if (hash_node_ptr != NULL)
		{
			while (hash_node_ptr != NULL)
			{
				free(hash_node_ptr->key);
				free(hash_node_ptr->value);
				free(last_ptr);
				last_ptr = hash_node_ptr;
				hash_node_ptr = hash_node_ptr->next;
			}
		}
		free(last_ptr);
		i++;
	}
	free(ht->array);
	free(ht);
}
