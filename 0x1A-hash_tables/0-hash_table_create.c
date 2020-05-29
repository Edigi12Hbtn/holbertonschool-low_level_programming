#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: the size of the array.
 *
 * Return: A pointer to the newly created hash table
 * If something went wrong, returns NULL.
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **node_dptr = NULL;
	unsigned long int index = 0;

	ht = malloc(sizeof(hash_table_t));/*space for table structure*/
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));/*space for nodes*/
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	node_dptr = ht->array; /*node_ptr pointing to the first node*/

	while (index < size)
		node_dptr[index++] = NULL;

	return (ht);
}
