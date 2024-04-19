
#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: the size, in number of nodes, to make the new hash table.
 *
 * Return: a pointer to the newly created hash table.
 */

typedef struct hash_node
{
    char *key;
    int value;
    struct hash_node *next;
} hash_node_t;

typedef struct 
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (ht == NULL) 
    {
        return (NULL);
    }

    ht->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
    if (ht->array == NULL) 
    {
        free(ht);
        return (NULL);
    }

    for (unsigned long int i = 0; i < size; i++) 
    {
        ht->array[i] = NULL;
    }

    ht->size = size;

    return (ht);
}

int main()
{
    unsigned long int table_size = 100;
    hash_table_t *hash_table = hash_table_create(table_size);

    if (hash_table != NULL) 
    {
        printf("Hash table created successfully!\n");
    } else 
    {
        printf("Failed to create hash table.\n");
    }

    return (0);
}
