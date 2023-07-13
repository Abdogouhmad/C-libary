#include "hash_tables.h"
/**
* key_index - give the index of the key
* @key: the key
* @size: the size
* Return: The index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = hash_djb2(key);
	unsigned long int the_index = value % size;

	return (the_index);
}
