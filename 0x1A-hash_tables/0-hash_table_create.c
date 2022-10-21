#include "hash_tables.h"

/**
 * hash_table_create - a function creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table
 * or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	if (size < 1)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
	{
		free(hash);
		return (NULL);
	}
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash->array);
		return (NULL);
	}
	return (hash);
}
