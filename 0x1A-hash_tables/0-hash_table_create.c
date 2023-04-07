#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: size in number of nodes, to make the new hash table.
 *
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; i < size; i++)
		hash->array[i] = NULL;

	return (hash);
}
