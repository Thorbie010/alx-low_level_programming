#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function that gets a node of list at specific index
 * @head: A pointer to listint_t structure
 * @index: The index of the node
 * Return: A pointer to node at specified index, or NULL if not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (current_index == index)
			return (head);
	}
	head = head->next;
	current_index++;

	return (NULL);
}
