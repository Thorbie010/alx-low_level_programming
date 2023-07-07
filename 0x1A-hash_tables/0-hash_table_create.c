#include "hash_tables.h"

/**
 *
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* hashTable = (hash_table_t*)malloc(sizeof(hash_table_t));
	hashTable->array = (hash_node_t**)calloc(size, sizeof(hash_node_t*));
	hashTable->size = size;
	return (hashTable);
}
