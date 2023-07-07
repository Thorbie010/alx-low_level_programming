#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - function that adds element to the hash table
 * @ht: hass table to be updated
 * @key: is the key
 * @value: value associated with the key
 * Return: 1 if success otherwise return 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *newPair;
	char *new_key = strdup(key), *new_value = strdup(value);
	
	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	newPair = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newPair == NULL)
		return (0);

	newPair->key = new_key;
	newPair->value = new_value;

	if (ht->array[index] != NULL)
	{
		hash_node_t *current = ht->array[index];

		while (current->next != NULL)
			current = current->next;
		current->next = newPair;
	}
	else
		ht->array[index] = newPair;
	return (1);
}
