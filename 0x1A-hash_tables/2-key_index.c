#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in a hash table array.
 * @key: Pointer to the key for which the index is calculated.
 * @size: Size of the array of the hash table.
 *
 * This function utilizes the hash_djb2 function to compute the hash value.
 *
 * Return: Index at which the key/value pair should be stored in the
 * array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
