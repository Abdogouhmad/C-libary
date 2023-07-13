#include "hash_tables.h"
/**
 * hash_table_set - insert in the hash table
 * @ht: our hash table
 * @key: the key
 * @value: the value of the key
 * Return: 0 on success, -1 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	hash_node_t *current;

	/*CHECK IF THE VALUES ARE EMPTY RETURN 0 AS FAILIER*/
	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	if (*key == '\0' || new_node == NULL)
		return (0);

	/*get the hashed key */
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (current->key == (int *)key)
		{
			free(current->value);
			current->value = strdup(value);
	    free(new_node);
			return (1);
		}
		current = current->next;
	}
	/*duplicate the key and value*/
	new_node->key = (int *)key;
	new_node->value = strdup(value);


	/*IF THE COLLISION OCCURED THEN UPDATE THE INDEX WITH NEW NODE*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
