#include "hash_tables.h"

/**
 * hash_table_get - Entry point
 *
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	unsigned long int index = 0;
	hash_node_t *ptr_hash_node = NULL;
	int not_found = 1;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	ptr_hash_node = (ht->array)[index];

	if (ptr_hash_node == NULL)
		return (NULL);

	while (not_found && ptr_hash_node != NULL)
	{
		not_found = strcmp(ptr_hash_node->key, key);
		if (not_found == 0)
			break;
		ptr_hash_node = ptr_hash_node->next;
	}

	if (not_found == 0)
		value = ptr_hash_node->value;
	return (value);
}
