#include "hash_tables.h"
/**
 * key_index - function that returns the index of a key
 * @key: key
 * @size: size of the array of the hash table
 * Return: index at which the value/key pair should be
 * stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
