#include "hash_tables.h"
/**
 * hash_table_create - create an empty hash
 * @size: the size of the hastable
 * Return: the hashtable creation
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	/*allocate memory for the hash tables*/
	hash_table_t *hs = malloc(sizeof(hash_table_t));

	/*check if the allocation failed if so retunr null*/
	if (hs == NULL)
		return (NULL);

	/*set the size of hash tables */
	hs->size = size;

	/*allocate the memory for the array*/
	hs->array = malloc(sizeof(hash_node_t *) * size);

	/*check if the array has failed then return null*/
	if (hs->array == NULL)
		return (NULL);

  /*loop over the array and init with null*/
	for (i = 0; i < size; i++)
		hs->array[i] = NULL;

	return (hs);
}

