#include "hash_tables.h"
/**
 * hash_table_set - insert in the hash table
 * @ht: our hash table
 * @key: the key
 * @value: the value of the key
 * Return: 0 on success, -1 on failure
 */
int hash_table_set(hash_table_t *ht, int key, const char *value)
{
	hash_node_t *new_node = NULL, *temp = NULL;
	unsigned long int index;

	if (ht == NULL || value == NULL)
		return (2);

	/*find the index of the key in the array*/
	index = key % ht->size;

	/*check if the key already exists in the list at this index*/
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (temp->key == key)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (0);
		}
		temp = temp->next;
	}

	/*create a new node for the key/value pair*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: failed to allocate\n");
	return (2);
	}
	new_node->key = key;
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (0);
}
