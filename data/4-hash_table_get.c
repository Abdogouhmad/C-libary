#include "hash_tables.h"
/**
 * hash_table_get - get the value of the key
 * @ht: the hash table
 * @key: the key that its value to be returned
 * Return: the value or null if the key not exists
 */
char *hash_table_get(const hash_table_t *ht, int key)
{
	unsigned long int index;
	hash_node_t *current = NULL;

	/*check over the hash table and the key if the are not empty*/
	if (ht == NULL)
		return (NULL);

	/*assign values*/
	index = key % ht->size;
	current = ht->array[index];

	while (current != NULL && current->key != key)
		current = current->next;

	/**
	 * IF THE CURRENT IS EQUALE TO NULL THEN RETURN IT
	 * OTHERWISE RETURN THE VALUE OF THE KEY
	 */
	return ((current == NULL) ? NULL : current->value);
}
