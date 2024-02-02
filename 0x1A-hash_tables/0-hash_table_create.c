#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 *
 * Allocates memory for a new hash table of a given size.
 *
 * @size: Size of the hash table/array.
 * Return: Pointer to the newly created hash table, or NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new = NULL;
    unsigned long int i;

    if (size == 0)
        return (NULL);

    new = malloc(sizeof(hash_table_t));
    if (new == NULL)
        return (NULL);

    new->size = size;
    new->array = malloc(sizeof(hash_node_t *) * size);
    if (new->array == NULL)
    {
        free(new);
        return (NULL);
    }

    i = 0;
    while (i < size)
    {
        new->array[i] = NULL;
        i++;
    }

    return (new);
}
