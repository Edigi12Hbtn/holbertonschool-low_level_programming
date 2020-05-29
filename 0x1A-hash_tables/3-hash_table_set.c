#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * In case of collision, add the new node at the beginning of the list.
 *
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t **dblptr_node = NULL;

	if (ht == NULL)
		return (0);

	if (ht->size == 0 || ht->array == NULL)
		return (0);

	if (*key == '\0')
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	/* calculate the index */

	dblptr_node = ht->array;
	dblptr_node += index; /* Let's point to the list */

	/* call the function to add the node */
	if (add_hash_node(dblptr_node, (char *) key, value) == NULL)
		return (0);

	return (1);
}

/**
 * add_hash_node - add a node at the beginning of the list.
 *
 * @head: pointer to head of list.
 * @key: key of hash_node.
 * @value: value of hash_node.
 *
 * Return: pointer to the new element added of NULL if it fails.
 */

hash_node_t *add_hash_node(hash_node_t **head,
			   char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	if (head == NULL || key == NULL || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = key;
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	(*head) = new_node;

	return (*head);
}
