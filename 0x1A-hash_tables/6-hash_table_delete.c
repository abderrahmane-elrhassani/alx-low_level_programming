#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to the hash table to be deleted.
 *
 * This function deletes the entire hash table, including all nodes.
 * Memory occupied by keys, values, nodes, and the array itself is freed.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *current_node = NULL;
    unsigned long int index = 0;

    if (ht == NULL)
        return;

    while (index < ht->size)
    {
        if (ht->array[index] != NULL)
        {
            while (ht->array[index])
            {
                current_node = ht->array[index];
                free(current_node->key);
                free(current_node->value);
                ht->array[index] = ht->array[index]->next;
                free(current_node);
            }
        }
        index++;
    }
    free(ht->array);
    free(ht);
}
