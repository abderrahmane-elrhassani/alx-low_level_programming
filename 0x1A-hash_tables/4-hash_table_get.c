#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Pointer to the hash table to look into.
 * @key: Pointer to the key being searched for.
 *
 * Return: Value associated with the element, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int i = 0;
    hash_node_t *temp_var;

    if (ht == NULL || key == NULL)
        return (NULL);

    i = key_index((const unsigned char *)key, ht->size);
    temp_var = ht->array[i];

    while (temp_var != NULL)
    {
        if (strcmp(temp_var->key, key) == 0)
            return (temp_var->value);
        temp_var = temp_var->next;
    }

    return (NULL);
}
