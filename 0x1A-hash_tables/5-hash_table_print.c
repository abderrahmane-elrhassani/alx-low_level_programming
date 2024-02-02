#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: Pointer to the hash table to be printed.
 *
 * This function prints the key-value pairs in the given hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *current_node;
    unsigned long int index = 0, count = 0;

    if (ht == NULL)
        return;
    printf("{");

    while (index < ht->size)
    {
        if (ht->array[index] != NULL)
        {
            current_node = ht->array[index];
            while (current_node)
            {
                printf("%s'%s': '%s'", count == 0 ? "" : ", ",
                       current_node->key, current_node->value), count++;
                current_node = current_node->next;
            }
        }
        index++;
    }
    printf("}\n");
}
